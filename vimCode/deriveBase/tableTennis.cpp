/*
 * @Author: chamip
 * @Date: 2021-09-10 17:42:15
 * @LastEditTime: 2021-09-10 18:05:57
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/deriveBase/tableTennis.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

// #include <iostream>
#include <string>
#include "tableTennis.h"

TableTennisPlayer::TableTennisPlayer() {}
TableTennisPlayer::TableTennisPlayer(const std::string& fn, const std::string& ln, bool ht) \
: firstname(fn), lastname(ln), hasTable(ht) {}
std::string TableTennisPlayer::getName() {
    return firstname + " " + lastname;
}
// TableTennisPlayer::~TableTennisPlayer() {
//     std::cout << "destructor." << std::endl;
// };