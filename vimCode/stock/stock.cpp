#include <iostream>
#include <string>
#include "stock.h"

int main()
{
    {
    using std::cout;
    using std::endl;
    Stock stock1("Julia", 100, 100.0);
    stock1.show();
    stock1.buy(10, 20.0);
    stock1.show();
    stock1.sell(10, 20.0);
    stock1.show();
    stock1.update(10.0);
    stock1.show();

    Stock stock2 = Stock("chamip", 1, 10.0);
    stock2.show();
    stock1 = Stock("syr", 0606, 100.0);
    stock1.show();
    stock2.show();
    std::cout << "Done!" << std::endl;
    }
    return 0;
}