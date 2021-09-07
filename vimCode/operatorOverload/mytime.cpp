/*
 * @Author: chamip
 * @Date: 2021-09-07 16:14:30
 * @LastEditTime: 2021-09-07 17:35:19
 * @LastEditors: chamip
 * @Description: function implementation
 * @FilePath: /OutputDoc/vimCode/operatorOverload/mytime.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include "mytime.h"

Time::Time() {
    std::cout << "Default constructor is called." << std::endl;
    hours = 0;
    minutes = 0;
}

Time::Time(int h,int m) {
    std::cout << "constructor Time(int h, int m) is called." << std::endl;
    hours = h;
    minutes = m;
}

/*
* 参数列表后面的const是修饰调用方法的对象的this指针
* 使得该指针不能修改私有数据。
*/

Time Time::operator+(const Time& t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes = sum.minutes % 60;
    return sum;
}

void Time::show() {
    std::cout << hours << "hours, " << minutes << "minutes." << std::endl;
    return ;
}

Time::~Time() {
    std::cout << "destructor is called." << std::endl;
}