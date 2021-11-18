/*
* leetcode.912 quicksort
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int>& nums);
void randomized_quicksort(vector<int>& nums, int left, int right);
int randomized_partition(vector<int>& nums, int left, int right);
int partition(vector<int>& nums, int left, int right);

int main()
{
    vector<int> vec{5,1,1,2,0,0};
    vector<int> ans = sortArray(vec);
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

vector<int> sortArray(vector<int>& nums) {
    srand((unsigned)time(NULL));
    randomized_quicksort(nums, 0, nums.size() - 1);
    return nums;
}

void randomized_quicksort(vector<int>& nums, int left, int right) {
    if(left < right) {
        int pos = randomized_partition(nums, left, right);
        randomized_quicksort(nums, left, pos - 1);
        randomized_quicksort(nums, pos + 1, right);
    }
    return ;
}

int randomized_partition(vector<int>& nums, int left, int right) {
    int random = rand() % (right - left + 1) + left;
    swap(nums[right], nums[random]);
    return partition(nums, left, right);
}

int partition(vector<int>& nums, int left, int right) {
    int povit = nums[right];
    int i = left - 1;
    for(int j = left; j < right; j++) {
        if(nums[j] <= povit) {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[right]);
    return i + 1;
}