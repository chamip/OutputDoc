#include <iostream>

void testPrint(char ** str) {
    char * str1 = nullptr;
    while((str1 = *str++) != nullptr) {
        std::cout << str1 << std::endl;
    }
    return ;
}

int main()
{
    char * str[] = {"ab", "cd", "ef", nullptr};
    testPrint(str);
    return 0;
}