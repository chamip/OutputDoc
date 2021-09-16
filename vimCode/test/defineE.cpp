/*
 * @Author: chamip
 * @Date: 2021-09-16 13:15:37
 * @LastEditTime: 2021-09-16 13:21:35
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/test/defineE.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#define PI 3.1415926

/*
* g++ -E defineE.cpp -o defineE.p查看底部会看到PI替换
*/

int main()
{
    std::cout << "PI = " << PI << std::endl;
    return 0;
}