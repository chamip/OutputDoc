#include <iostream>
#include <cstddef>
// #define __cplusplus 201103L

int main()
{   
    std::cout << "sizeof(char16_t): " << sizeof(char16_t) << std::endl;
    std::cout << "sizeof(char32_t): " << sizeof(char32_t) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(long long): " << sizeof(long long) << std::endl;
    std::cout << "sizeof(unsigned long long): " << sizeof(unsigned long long) << std::endl;
    std::nullptr_t a = nullptr;
    //typedef decltype(nullptr) nullptr_t;
    std::cout << "sizeof(a): " << sizeof(a) << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(double).name() << std::endl;
    return 0;
}