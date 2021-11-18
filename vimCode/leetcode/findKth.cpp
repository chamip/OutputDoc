/*
* leetcode.215 findKthLargest
*/
#include <iostream>
#include <vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k);
int quickSelect(vector<int>& nums, int left, int right, int index);
int randomized_partion(vector<int>& nums, int left, int right);
int partition(vector<int>& nums, int left, int right);

int main() 
{
    vector<int> vec{3,2,3,1,2,4,5,5,6};
    int k = 4;
    int ans = findKthLargest(vec, k);
    cout << ans << endl;
    return 0;
}
int findKthLargest(vector<int>& nums, int k) {
    srand(time(0));
    int ans = quickSelect(nums, 0, nums.size() - 1, nums.size() - k);
    return ans;
}
int quickSelect(vector<int>& nums, int left, int right, int index) {
    int q = randomized_partion(nums, left, right);
    if(q == index) {
        return nums[q];
    }else if(q < index){
        return quickSelect(nums, q + 1, right, index);
    }else {
        return quickSelect(nums, left, q - 1, index);
    }
    return 0;
}
int randomized_partion(vector<int>& nums, int left, int right) {
    int random = rand() % (right - left + 1) + left;
    swap(nums[right], nums[random]);
    return partition(nums, left, right);
}
int partition(vector<int>& nums, int left, int right) {
    int povit = nums[right];
    int i = left - 1;
    for(int j = left; j < right; j++) {
        if(nums[j] < povit) {
            swap(nums[++i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[right]);
    return i + 1;
}