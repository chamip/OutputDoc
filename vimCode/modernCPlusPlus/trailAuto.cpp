/*
 * @Author: chamip
 * @Date: 2021-09-08 13:22:01
 * @LastEditTime: 2021-09-08 13:31:24
 * @LastEditors: chamip
 * @Description: 尾返回类型auto
 * @FilePath: /vimCode/modernCPlusPlus/trailAuto.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
//c++11
template<typename T, typename U>
auto add1(T x, U y) -> decltype(x+y) {
    return x + y; 
}

//c++14
template<typename T, typename U>
auto add2(T x, U y) {
    return x + y;
}

int main()
{
    auto tmp1 = add1(1, 2.0);
    if(std::is_same<decltype(tmp1), double>::value) {
        std::cout << "tmp1 is double." << std::endl;
    }else {
        std::cout << "tmp1 is not double." << std::endl;
    }

    auto tmp2 = add2(606.0, 33);
    std::cout << "tmp2  = " << tmp2 << std::endl;
    if(std::is_same<decltype(tmp2), double>::value) {
        std::cout << "tmp2 is double." << std::endl;
    }else {
        std::cout << "tmp2 is not double." << std::endl;
    }
    return 0;
}