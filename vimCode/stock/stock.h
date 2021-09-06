/*
 * @Author: chamip
 * @Date: 2021-09-03 15:08:26
 * @LastEditTime: 2021-09-06 14:39:11
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/stock/stock.h
 * 可以输入预定的版权声明、个性签名、空行等
 */
#ifndef STOCK_H_
#define STOCK_H_

#include <string>

class Stock {
    private:
        /*中声明常量
        * 1. static const int Months = 12;
        * 2. enum{Months = 12};
        * double costs[Months];
        */
        std::string company;
        long shares;
        double share_val;
        double share_total;
        void set_total(); 
    public:
        Stock();
        // Stock(const std::string& com);
        // Stock(const std::string& com, long sh);
        Stock(const std::string& com, long sh, double shval);
        void buy(long sh, double shval);
        void sell(long sh, double shval);
        void update(double shval);
        void show() const;
        ~Stock();
        const Stock& topval(const Stock& s) const;
};

#endif