/*
 * @Author: chamip
 * @Date: 2021-09-03 17:12:00
 * @LastEditTime: 2021-09-06 10:48:56
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/stock/stockImp.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include <iostream>
#include <string>
#include "stock.h"

Stock::Stock() {
    std::cout << "Default constructor is called." << std::endl;
    company = "No Name.";
    shares = 0;
    share_val = 0.0;
    set_total();
};

// Stock::Stock(const std::string& com) {
//     company = com;
//     shares = 0;
//     share_val = 0.0;
//     set_total();
// }

// Stock::Stock(const std::string& com, long sh) {
//     company = com;
//     shares = sh;
//     share_val = 0.0;
//     set_total();
// }

Stock::Stock(const std::string& com, long sh, double shval) {
    std::cout << "Constructor using " << com <<" is called." << std::endl;
    company = com;
    shares = sh;
    share_val = shval;
    set_total();
}

Stock::~Stock() {
    std::cout << "Bye! " << company << "!" << std::endl;
    std::cout << "Destructor is called." << std::endl;
}

inline void Stock::set_total() {
    share_total = share_val * shares;
}

void   Stock::buy(long sh, double shval) {
        shares += sh;
        share_val = shval;
        set_total();
}

void Stock::sell(long sh, double shval) {
    shares -= sh;
    share_val = shval;
    set_total();
}

void Stock::update(double shval) {
    share_val = shval;
    set_total();
}

void Stock::show() const {
    std::cout << "Company: " << company << " Shares: " << shares << std:: endl;
    std::cout << "Share Price: $" << share_val << "Total Worth: $" << share_total << std::endl;
    std::cout << std::endl;
}

const Stock& Stock::topval(const Stock& s) const {
    if(s.share_total > share_total) {
        return s;
    }
    return *this;
}