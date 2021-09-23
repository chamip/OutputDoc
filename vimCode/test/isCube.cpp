/*
 * @Author: chamip
 * @Date: 2021-09-23 14:28:22
 * @LastEditTime: 2021-09-23 14:34:37
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/test/isCube.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>

    bool isPowerOfThree(int n) {
        if(n == 1) {
            return true;
        }
        if(n == 0 || n % 3 != 0) {
            return false;
        }
        std::cout << n << std::endl;
        return isPowerOfThree(n / 3);
    }

int main()
{
    bool flag = true;
    bool res = isPowerOfThree(27);
    std::cout << flag << std::endl;
    std::cout << res << std::endl;
    return 0;
}
