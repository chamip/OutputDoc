#include <iostream>
#include <vector>
using namespace std;

class MedianFinder {
public:
    vector<int> nums{};
    /** initialize your data structure here. */
    MedianFinder() {
        nums.clear();
    }
    
    void addNum(int num) {
        if(nums.empty()) {
            nums.push_back(num);
        }else {
            nums.insert(lower_bound(nums.begin(), nums.end(), num), num);
        }
        return ;
    }
    
    double findMedian() {
        if(nums.empty()) {
            return -1;
        }
        double res = 0.0;
        if(nums.size() % 2 == 0) {
            res = (nums[nums.size() / 2] + nums[nums.size() / 2 - 1]) / 2.0;
        }else {
            res = ((double)nums[nums.size() / 2]);
        }
        return res;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
int main()
{
    MedianFinder* obj = new MedianFinder();
    obj->addNum(1);
    obj->addNum(2);
    obj->addNum(3);
    obj->addNum(5);
    double param_2 = obj->findMedian();
    cout << param_2 << endl;
    return 0;
}