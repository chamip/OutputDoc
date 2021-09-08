/*
 * @Author: chamip
 * @Date: 2021-09-08 10:42:18
 * @LastEditTime: 2021-09-08 11:21:49
 * @LastEditors: chamip
 * @Description: if/switch临时变量/初始化列表/结构化绑定
 * @FilePath: /vimCode/modernCPlusPlus/inltializer.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

/*
* 初始化列表构造函数
*/

#include <iostream>
#include <initializer_list>
#include <vector>
#include <tuple>

class Magic_foo {
private:
    std::vector<int> vec;
public:
    Magic_foo(std::initializer_list<int> list);
    void show();
};
Magic_foo::Magic_foo(std::initializer_list<int> list) {
    for(std::initializer_list<int>::iterator it = list.begin(); it != list.end(); it++) {
        vec.push_back(*it);
    }
}

void Magic_foo::show() {
    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << ", ";
    }
    std::cout << std::endl;
    return ;
}

std::tuple<int, double, std::string> f();

int main()
{
    Magic_foo magic_foo = {1, 2, 3, 4};
    magic_foo.show();
    std::cout << std::endl;
    std::cout << "/*----------------------*/" << std::endl;
    auto [x, y, z] = f();
    std::cout << "x = " << x <<", y = " << y << ", z = " << z << std::endl;
    return 0;
}

/*-------------------------------------*/

/*
* 结构化绑定tuple
*/

std::tuple<int, double, std::string> f() {
    return std::make_tuple(1, 1.1, "hello");
}

/*------------------------------------*/
