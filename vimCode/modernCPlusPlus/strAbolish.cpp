/*
 * @Author: chamip
 * @Date: 2021-09-07 10:27:24
 * @LastEditTime: 2021-09-07 11:43:57
 * @LastEditors: chamip
 * @Description: 学习现代C++之前，了解从11开始被弃用的特性
 * @FilePath: /vimCode/modernCPlusPlus/strAbolish.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <type_traits>
#define LEN 10

void str();
void nptr();
void consexpr();

int main()
{
    str();
    nptr();
    consexpr();
    return 0;
}

/*----------------------------------------------------*/
/*
* 不再允许字符串字面值常量赋值给一个 char *
* 如果需要用字符串字面值常量赋值和初始化一个 char *
* 应该使用 const char * 或者 auto
* ` char* str = "hello, World!" `; //弃用警告
*/
void str()
{
    //warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
    // char* str = "hello, World!";

    const char* str = "hello, World!";
    std::cout << str[0] << std::endl;
    return ;
}
/*-----------------------------------------------------*/
/*
* C 语言风格的类型转换被弃用（即在变量前使用 (convert_type)
* 应该使用 static_cast、reinterpret_cast、const_cast 来进行类型转换。 
*/

/*------------------------------------------------------*/
/*
* clang++编译指令：
* clang++ strAbolish.cpp -std=c++2a -o strAbolish
*/
void foo(int);
void foo(char*);
void nptr() {
    if(std::is_same<decltype(0), decltype(NULL)>::value) {
        std::cout << "0 == NULL" << std::endl;
    }
    if(std::is_same<decltype((void*)0), decltype(NULL)>::value) {
        std::cout << "(void*)0 == NULL" << std::endl;
    }
    if(std::is_same<decltype(nullptr), decltype(NULL)>::value) {
        std::cout << "nullptr == NULL" << std::endl;
    }
    foo(0);
    foo(nullptr);
    // foo(NULL);
    return ;
}

void foo(char*) {
    std::cout << "foo(char*) is called." << std::endl;
    return ;
}

void foo(int) {
    std::cout << "foo(int) is called." << std::endl;
    return ;
}
/*-----------------------------------------------------------*/

/*-----------------------------------------------------------*/
int len_foo() {
    int i = 2;
    return i;
}

constexpr int len_foo_constexpr() {
    return 5;
}

constexpr int Fibonacci(const int n) {
    return n == 1 || n == 2 ? 1 : Fibonacci(n - 1) + Fibonacci(n - 2);
}

void consexpr() {
    char arr_1[10];
    char arr_2[LEN];
   int len = 10;
    char arr_3[len];      //error
    const int len_2 = len + 1;
    constexpr int len_2_constexpr = 1 + 2 + 3;
    //char arr_4[len_2]  //error
    char arr_4[len_2_constexpr];
    // char arr_5[len_foo];    //error
    char arr_6[len_foo_constexpr() + 1];

    std::cout << Fibonacci(10) << std::endl;
    return ;
}
/*----------------------------------------------------------*/