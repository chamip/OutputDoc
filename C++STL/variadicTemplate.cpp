#include <iostream>

//non-template function is must to end recursion.
template <typename T>
void print (const T& args) {
    std::cout <<"call for an args function()." << std::endl;
    std::cout << "sizeof...(args): " << sizeof(args) << std::endl;
    std::cout << args << std::endl;
}

template <typename T, typename...  Types>
void print (const T& firstArgs, const Types&... args) {
    std::cout << "call for many args function()." << std::endl;
    std::cout << "sizeof...(Types): " << sizeof...(Types) << std::endl;
    std::cout << "sizeof...(args): " << sizeof...(args) << std::endl;
    std::cout << "firstArgs: " << firstArgs << std::endl;
    std::cout << std::endl;
    print(args...);
}

int main()
{
    std::string str = "hello";
    int i = 100;
    double j = 11.1;
    char c = 'a';
    print(str, i, j, c);
    return 0;
}