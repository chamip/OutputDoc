#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) {
        return 0;
    }
    vector<int> dp(n ,0);
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(nums[j] < nums[i]) {
                //dp[i] = dp[j] + 1;
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    sort(dp.begin(), dp.end());
    return dp[dp.size() - 1];
}

int main()
{
    vector<int> vec = {0,1,0,3,2,3};
    int ans = lengthOfLIS(vec);
    cout << ans << endl;
    return 0;
}