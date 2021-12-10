/*
 * @Author: chamip
 * @Date: 2021-12-08 20:39:45
 * @LastEditTime: 2021-12-08 21:25:02
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /test/a.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

bool static cmp(const std::string& a, const std::string& b) {
    int len = std::min(a.length(), b.length());
    std::string a1 = a;
    transform(a1.begin(), a1.end(), a1.begin(), ::tolower);
    std::string b1 = b;
    transform(b1.begin(), b1.end(), b1.begin(), ::tolower);
    // std::string b1 = b.tolower();
    for(int i = 0; i < len; ++i) {
        if(a1[i] < b1[i]) {
            return true;
        }else if(a1[i] > b1[i]){
            return false;
        }
    }
    return a1.length() < b1.length();
}

int main()
{
    std::ifstream afile;
    std::string dataflow = "/Users/chamip/Desktop/test/word.txt";
    afile.open(dataflow, std::ios::in);
    if(!afile.is_open()) {
        std::cout << "Failed." << std::endl;
    }
    std::string buf;
    std::vector<std::string> vstr;
    while(getline(afile, buf)) {
        vstr.push_back(buf);
    }
    std::vector<std::string> vstrc;
    for(int i = 0; i < vstr.size(); ++i) {
        std::string s;
        for(int j = 0; j < vstr[i].length(); ++j) {
            if((vstr[i][j] >= 'a' &&vstr[i][j] <= 'z') 
            || ((vstr[i][j] >= 'A') && vstr[i][j] <= 'Z' )) {
                s += vstr[i][j];
            }else {
                vstrc.push_back(s);
                s = "";
            }
        }
    }
    sort(vstrc.begin(), vstrc.end(), cmp);
    for(const auto& str : vstrc) {
        std::cout << str << std::endl;
    }
    std::cout << std::endl;
    return 0;
}