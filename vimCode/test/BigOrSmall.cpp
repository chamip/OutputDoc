#include <iostream>

int main(int argc, char* argv[]) 
{
    int i = 0x12345678;
    if(*((char*)&i) == 12) {
        std::cout << "Big" << std::endl;
    }else {
        std::cout << "Small" << std::endl;
    }
    return 0;
}