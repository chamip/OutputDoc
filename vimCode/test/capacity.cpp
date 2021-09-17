/*
 * @Author: chamip
 * @Date: 2021-09-17 13:17:25
 * @LastEditTime: 2021-09-17 13:35:00
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/test/capacity.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <vector>
const int MaxSize = 10;

int main()
{
    std::vector<int> vt;
    for(int i = 0; i < MaxSize; i++) {
        vt.push_back(i);
        std::cout << "capacity: " << vt.capacity() 
            << " size: " << vt.size() << std::endl;
    }
    std::cout << std::endl;
    vt.resize(5);
    std::cout << "after resize," << "capacity: " << vt.capacity() 
        << " size: " << vt.size() << std::endl;
    std::cout << std::endl;
    std::vector<int>(vt).swap(vt);
    std::cout << "after swap," << "capacity: " << vt.capacity() 
        << " size: " << vt.size() << std::endl;
    std::cout << std::endl;
    vt.erase(vt.begin());
    std::cout << "after erase," << "capacity: " << vt.capacity() 
        << " size: " << vt.size() << std::endl;
    return 0;
}
