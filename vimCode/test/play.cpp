/*
 * @Author: chamip
 * @Date: 2021-09-08 18:29:20
 * @LastEditTime: 2021-09-08 18:42:44
 * @LastEditors: chamip
 * @Description: LCP29乐团站位
 * @FilePath: /vimCode/test/play.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <vector>

class Solution {
public:
    int orchestraLayout(int num, int xPos, int yPos) {
        int left = 0, right = num - 1, top = 0, bottom = num - 1;
        std::vector<std::vector<int>> grid(num, std::vector<int>(num));
        int flag = 1;
        while(left <= right && top <= bottom) {
            for(int col = left; col <= right; col++) {
                grid[top][col] = flag;
                flag++;
                if(flag > 9) {
                    flag %= 9;
                }
            }
            for(int row = top + 1; row <= bottom; row++) {
                grid[row][right] = flag;
                flag++;
                if(flag > 9) {
                    flag %= 9;
                }
            }
            if(left < right && top < bottom) {
                for(int col = right - 1; col >= left; col--) {
                    grid[bottom][col] = flag;
                    flag++;
                    if(flag > 9) {
                        flag %= 9;
                    }
                }
                for(int row = bottom - 1; row > top; row--) {
                    grid[row][left] = flag;
                    flag++;
                    if(flag > 9) {
                        flag %= 9;
                    }
                }
            }
            left++;
            right--;
            top++;
            bottom--;
        }
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < num; j++) {
                std::cout << grid[i][j] << " ";
            }
            std::cout << std::endl;
        }
        return grid[xPos][yPos];
    }
};

int main()
{
    Solution s;
    int res = s.orchestraLayout(5059, 3347, 2169);
    std::cout << std::endl;
    std::cout << res << std::endl;
    return 0;
}