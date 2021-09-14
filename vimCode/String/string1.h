/*
 * @Author: chamip
 * @Date: 2021-09-14 13:46:37
 * @LastEditTime: 2021-09-14 14:53:32
 * @LastEditors: chamip
 * @Description: 动态内存分配new/delete
 * @FilePath: /OutputDoc/vimCode/String/string1.h
 * 可以输入预定的版权声明、个性签名、空行等
 */

#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>

class String
{
private:
    char* str;
    int len;
    static int nums_string;
    static const int CINLIM = 80;
public:
    String();    //default constructor
    String(const char* s);    //constructor
    String(const String&);    //copy constructor
    ~String();

    int length() const { return len; }
    String& operator=(const char* s);
    String& operator=(const String&);
    char& operator[](int i);
    const char& operator[](int i) const; 

    friend bool operator<(const String& s1, const String& s2);
    friend bool operator>(const String& s1, const String& s2);
    friend bool operator==(const String& s1, const String& s2);
    friend std::ostream& operator<<(std::ostream& os, const String& s);
    friend std::istream& operator>>(std::istream& is, String& s);

    static int HowMany();
};

#endif

