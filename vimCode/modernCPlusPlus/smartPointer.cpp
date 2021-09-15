/*
 * @Author: chamip
 * @Date: 2021-09-15 16:52:04
 * @LastEditTime: 2021-09-15 17:04:54
 * @LastEditors: chamip
 * @Description: 智能指针/new后自动回收内存，防止内存泄漏
 * @FilePath: /OutputDoc/vimCode/modernCPlusPlus/smartPointer.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <memory>
class Report
{
private:
    std::string str;
public:
    Report(const std::string& s):str(s) {
        std::cout << "Object created." << std::endl;
    }
    ~Report() {
        std::cout << "Object deleted!" << std::endl;
    }
    void comment() const;
};

void Report::comment() const {
    std::cout << str << std::endl;
}

int main() 
{
    //auto_ptr已经被c++11摒弃/deprecated
    std::auto_ptr<Report> ps(new Report("Apple Keynote."));
    ps->comment();
    std::shared_ptr<Report> ps1(new Report("Apple Keynote."));
    ps1->comment();
    std::unique_ptr<Report> ps2(new Report("Apple Keynote."));
    ps2->comment();
    return 0;
}