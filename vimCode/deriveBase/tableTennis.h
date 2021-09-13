/*
 * @Author: chamip
 * @Date: 2021-09-10 17:35:44
 * @LastEditTime: 2021-09-13 11:14:50
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/deriveBase/tableTennis.h
 * 可以输入预定的版权声明、个性签名、空行等
 */

#ifndef TABLETENNIS_H_
#define TABLETENNIS_H_

#include <string>

class TableTennisPlayer {
private:
    std::string firstname;
    std::string lastname;
    bool hasTable;
public:
    // TableTennisPlayer();
    TableTennisPlayer(const std::string& fn = "hello", const std::string& ln = "world", bool ht = true);
    std::string getName();
    bool HasTable() const {
        return hasTable;
    }
    ~TableTennisPlayer();
};

class RatedPlayer: public TableTennisPlayer {
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const std::string& fn = "none", const std::string& ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
    unsigned int Rating() const {
        return rating;
    }
    ~RatedPlayer();
} ;

#endif
