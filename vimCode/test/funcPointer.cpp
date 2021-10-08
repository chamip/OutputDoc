#include <iostream>

double call1(int lines) {
    return 0.05 * lines;
}

double call2(int lines) {
    return 0.5 * lines;
}

void estimate(int line_num, double (* pf)(int lines)) {
    std::cout << "line_num: " << line_num
    <<", func_answer: " << (* pf)(line_num) << std::endl; 
}

int main()
{
    int line_num = 10;
    //函数名就是指针，直接传入函数名
    estimate(line_num, call1);
    estimate(line_num, call2);
    return 0;
}