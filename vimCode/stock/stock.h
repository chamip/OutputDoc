#ifndef STOCK_H_
#define STOCK_H_

#include <string>

class Stock {
    private:
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
        void show();
        ~Stock();
};

#endif