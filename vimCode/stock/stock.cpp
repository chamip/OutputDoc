/*
 * @Author: chamip
 * @Date: 2021-09-03 15:42:52
 * @LastEditTime: 2021-09-06 14:39:15
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/stock/stock.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include <iostream>
#include <string>
#include "stock.h"

int main()
{
    {
        // using std::cout;
        // using std::endl;

        /*
    * 先创建的对象后调用析构函数，和对象调用函数的顺序无关。
    * note: g++编译之前一定要先保存，不然无法编译。
    */

        // Stock stock2 = Stock("chamip", 1, 10.0);
        Stock stock1("Julia", 100, 100.0);
        stock1.show();
        stock1.buy(10, 20.0);
        stock1.show();
        stock1.sell(10, 20.0);
        stock1.show();
        stock1.update(10.0);
        stock1.show();

        Stock stock2[2] = {
            Stock("chamip", 1, 10.0),
            Stock("wh", 33, 117.0)
        };
        stock2[0].show();
        stock1 = Stock("syr", 0606, 100.0);
        stock1.show();
        stock2[1].show();
        std::cout << "Done!" << std::endl;

        const Stock * top = &stock2[0];
        top = &top->topval(stock2[1]);
        top->show();
    }
    return 0;
}