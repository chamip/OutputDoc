/*
 * @Author: chamip
 * @Date: 2021-09-16 17:28:34
 * @LastEditTime: 2021-09-16 17:35:24
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/test/vectorCmp.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <vector>
#include <algorithm>

static bool cmp(int a, int b) {
    return abs(a) > abs(b);
}

int main()
{
    std::vector<int> A = {2, 1, -3, 8, 5, 6};
    sort(A.begin(), A.end(), cmp);
    for(int i =0; i < A.size(); i++) {
        std::cout << A[i] << std::endl;
    }
    return 0;
}
