/*
 * @Author: chamip
 * @Date: 2021-09-07 16:11:19
 * @LastEditTime: 2021-09-07 17:31:28
 * @LastEditors: chamip
 * @Description: define time struct
 * @FilePath: /OutputDoc/vimCode/operatorOverload/mytime.h
 * 可以输入预定的版权声明、个性签名、空行等
 */

#ifndef MYTIME_H_
#define MYTIME_H_

class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    Time operator+(const Time& t) const;
    void show();
    ~Time();
};

#endif
