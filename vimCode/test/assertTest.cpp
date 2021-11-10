//if comment the next line, assert doesn't work. 
#define NDEBUG   
#include <cassert>
#include <iostream>

int main()
{
    int p = 0;
    //if assert() function is true, cotinue.
    // assert(p == 0);
    //if assert() is false, aborted.
    assert(p == 1);
    std::cout << p << std::endl;
    return 0;
}