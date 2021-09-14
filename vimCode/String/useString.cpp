/*
 * @Author: chamip
 * @Date: 2021-09-14 14:26:32
 * @LastEditTime: 2021-09-14 15:00:44
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/String/useString.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include "string1.h"

const int ArrSize = 10;
const int MaxLen = 80;

int main()
{
    String name;
    std::cout << "enter your name: ";
    std::cin >> name;
    std::cout << "enter up to " << ArrSize << " lines.<empty line to quit>:" << std::endl;
    String saysing[ArrSize];
    char temp[MaxLen];
    int count = 0;
    for(int i = 0; i < ArrSize; i++) {
        std::cout << i + 1 << ": ";
        std::cin.get(temp, MaxLen);
        while(std::cin && std::cin.get() != '\n') {
            continue;
        }
        if(!std::cin || temp[0] == '\0') {
            break;
        }else {
            saysing[i] = temp;
        }
        count++;
    }
    if(count > 0) {
        std::cout << "Here're your saysing: " <<std::endl;
        for(int i = 0; i < count; i++) {
            std::cout << "index[" << i << "]: " << saysing[i] << std::endl;
        }
        int shortest = 0;
        int first = 0;
        for(int i = 1; i < count; i++) {
            if(saysing[i].length() < saysing[shortest].length()) {
                shortest = i;
            }
            if(saysing[i] < saysing[first]) {
                first = i;
            }
        }
        std::cout << "shortest saysing is: " << saysing[shortest] << std::endl;
        std::cout << "first saysing is: " << saysing[first] << std::endl;
        std::cout << "total use " << String::HowMany() << " String objects." << std::endl;
    }else {
        std::cout << "No Inputs." << std::endl;
    }
    return 0;
}
