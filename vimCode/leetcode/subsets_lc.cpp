/*bug:
* subsets_lc.cpp:33:20: error: conversion from ‘Solution*’ to non-scalar type ‘Solution’ requested
*                              Solution obj = new Solution();
*/#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    Solution() {};
    ~Solution() {};
    vector<vector<int>> subsets(vector<int>& nums) {
        res.clear();
        path.clear();
        backTrack(nums, 0);
        return res;
    }

    void backTrack(vector<int>& nums, int index) {
        res.push_back(path);
        for(int i = index; i < nums.size(); i++) {
            path.push_back(nums[i]);
            backTrack(nums, i + 1);
            path.pop_back();
        }
        return ;
    }
private:
    vector<vector<int>> res;
    vector<int> path;
};

int main()
{
    Solution obj = new Solution();
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result;
    result = obj.subsets(nums);
    cout << '[';
    for(int i = 0; i < result.size(); i++) {
        cout << '[';
        for(int j = 0; j < result[i].size() - 1; j++) {
            cout << result[i][j] << ",";
        }
        cout << result[i][result[i].size() - 1] << ']';
    }
    cout << ']' << endl;
    return 0;
}