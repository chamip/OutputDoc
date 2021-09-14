/*
 * @Author: chamip
 * @Date: 2021-09-14 13:57:41
 * @LastEditTime: 2021-09-14 14:59:34
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/String/string1.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <cstring>
#include "string1.h"

int String::nums_string = 0;  //initialize static class member.

String::String() {
    len = 0;
    str = nullptr;
    // str = new char[1];
    // str[0] = '\0';
    nums_string++;
}

String::String(const char* s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    nums_string++;
}

String::String(const String& s) {
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    nums_string++;
}

String::~String() {
    delete [] str;
    nums_string--;
}

String& String::operator=(const char* s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String& String::operator=(const String& s) {
    if(this == &s) {
        return *this;
    }
    delete [] str;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    return *this;
}

char& String::operator[](int i) {
    return str[i];
}

const char& String::operator[](int i) const {
    return str[i];
}

bool operator<(const String& s1, const String& s2) {
    return (std::strcmp(s1.str, s2.str) < 0);
}

bool operator>(const String& s1, const String& s2) {
    return s2 < s1;
}

bool operator==(const String& s1, const String& s2) {
    return (std::strcmp(s1.str, s2.str) == 0);
}

std::ostream& operator<<(std::ostream& os, const String& s) {
    os << s.str;
    return os;
}

std::istream& operator>>(std::istream& is, String& s) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is) {
        s = temp;
    }
    while(is && is.get() != '\n') {
        continue;
    }
    return is;
}

int String::HowMany() {
    return nums_string;
}
