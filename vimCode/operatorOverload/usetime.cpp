/*
 * @Author: chamip
 * @Date: 2021-09-07 17:27:00
 * @LastEditTime: 2021-09-07 17:42:04
 * @LastEditors: chamip
 * @Description: test mytime
 * @FilePath: /OutputDoc/vimCode/operatorOverload/usetime.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include "mytime.h"

int main()
{
    /*
    * Default constructor is called.
    * 0hours, 0minutes.
    * constructor Time(int h, int m) is called.
    * constructor Time(int h, int m) is called.
    * Default constructor is called.
    * FLAG
    * Default constructor is called.
    * destructor is called.
    * 4hours, 1minutes.
    * destructor is called.
    * destructor is called.
    * destructor is called.
    * destructor is called.
    */
    Time time1;
    time1.show();
    Time time2(1, 30);
    Time time3(2, 31);
    Time timeTotal;
    std::cout << "FLAG" << std::endl; 
    timeTotal = time2 + time3;
    timeTotal.show();
    return 0;
}