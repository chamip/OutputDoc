/*
 * @Author: chamip
 * @Date: 2021-09-10 17:51:47
 * @LastEditTime: 2021-09-13 11:18:59
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/deriveBase/deriveBase.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <string>
#include "tableTennis.h"

int main()
{
    TableTennisPlayer t1("none", "none", false);
    std::cout << t1.getName() << std::endl;
    TableTennisPlayer tableTennisPlayer2("chamip", "zs", true);
    if(tableTennisPlayer2.HasTable() == true) {
        std::cout << tableTennisPlayer2.getName() << " has a table." << std::endl;
    }
    /*-----------------*/
    RatedPlayer rp1(100, "a", "b", true);
    TableTennisPlayer p1("x", "y", false);
    std::cout << rp1.getName() << std::endl;
    if(rp1.HasTable()) {
        std::cout << rp1.getName() << " has a table." << std::endl;
    }else {
        std::cout << rp1.getName() << "doesn't has a table." << std:: endl;
    }
    std::cout << "-------------------" << std::endl;
    std::cout << p1.getName() << std::endl;
    if(p1.HasTable()) {
        std::cout << p1.getName() << "has a table." << std::endl;
    }else {
        std::cout << p1.getName() << "doesn't has a table." << std:: endl;
    }
    std::cout << "-------------------" << std::endl;
    RatedPlayer rp2(123, p1);
    std::cout << rp2.getName() << std::endl;
    if(rp2.HasTable()) {
        std::cout << rp2.getName() << "has a table.";
    }else {
        std::cout << rp2.getName() << "doesn't has a table.";
    }
    std::cout << "and " << rp2.getName() << "'s rating is " << rp2.Rating() << std::endl; 
    return 0;
}
