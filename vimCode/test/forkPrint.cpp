#include <iostream>
#include <unistd.h>

int main()
{
    pid_t pid = fork();
    std::cout << "hello" << std::endl;
    fork();
    if(pid > 0) {
        std::cout << "hello parent." << std::endl;   
    }else if(pid == 0) {
        std::cout << "hello child." << std::endl;   
    }
    return 0;
}
