/*
 * @Author: chamip
 * @Date: 2021-09-10 17:51:47
 * @LastEditTime: 2021-09-10 18:07:00
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
    return 0;
}
