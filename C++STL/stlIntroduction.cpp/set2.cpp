#include <iostream>
#include <unordered_set>
#include <vector>

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
    std::unordered_set<int> s;
    bool ans = false;
    for(const auto& x : nums) {
        if(s.find(x) != s.end()) {
            ans = true;
            break;
        }
        s.insert(x);
        if(s.size() > k) {
            s.erase(s.begin());
        }
    }
    return ans;
}

int main()
{
    std::vector<int> nums {1,2,3,4,5};
    std::cout << containsNearbyDuplicate(nums, 2) << std::endl;
    return 0;
}