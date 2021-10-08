#include <iostream>

int main()
{
    const int i = 10;
    int * p = const_cast<int *>(&i);
    std::cout << *p << std::endl;
    *p = 20;
    std::cout << i << std::endl;
    std::cout << *p << std::endl;
    return 0;
}