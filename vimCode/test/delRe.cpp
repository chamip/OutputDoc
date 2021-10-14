#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) {
            return nums.size();
        }
        int slow = 0;
        int fast = 0;
        for(; fast < nums.size();fast++) {
            nums[slow] = nums[fast];
            while(fast + 1 < nums.size() && nums[fast+1] == nums[slow]) {
                fast++;
            }
            slow++;
        }
        for(int i = 0; i < slow; i++) {
            std::cout << nums[i] << std::endl;
        }
        std::cout << std::endl;
        return slow;
    }

int main()
{
    // std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    std::vector<int> nums = {1, 1};
    std::cout << removeDuplicates(nums) << std::endl;
    return 0;
}