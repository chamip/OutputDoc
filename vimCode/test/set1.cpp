#include <iostream>
#include <set>
#include <vector>

std::set<int> thirdMax(std::vector<int>& nums) {
    std::set<int> s;
    for(int num : nums) {
        s.insert(num);
        if(s.size() > 3) {
            s.erase(s.begin());
        }
    }
    return s;
}

int main()
{
    std::vector<int> nums{5, 2, 2};    
    std::set<int> ans = thirdMax(nums);
    std::cout << ans.size() << std::endl;
    for(int n : ans) {
        std::cout << n << std::endl;
    }
    return 0;
}