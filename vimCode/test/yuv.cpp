#include <iostream>

#define src (1.5)

int main()
{
    int num = 10000;
    num = num * src;
    std::cout << num << std::endl;
    std::cout << sizeof(num) << std::endl;
    std::cout << sizeof(int) << std::endl;
    return 0;
}