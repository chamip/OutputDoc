#include <iostream>
#include "Swap.h"

int main()
{
    using namespace std;
    int num1, num2;
    cout << "enter num1: ";
    cin >> num1;
    cout << "enter num2: ";
    cin >> num2;
    Swap(num1, num2);
    cout << "Swap: " << endl;
    cout << "num1: " << num1 << "/num2: " << num2 << endl;

    job tencent = {"chamip", 24, 172.0};
    job bytedance = {"syr0606", 25, 165.6};
    Show(tencent);
    Show(bytedance);
    Swap(tencent, bytedance);
    cout << "Swap: " << endl;
    Show(tencent);
    Show(bytedance);

    cout << "Bye!" << endl;
    return 0;
}