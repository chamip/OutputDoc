#include <iostream>
#include <vector>

using namespace std;

bool isPerfectSquare(int num) {
    int left = 1;
    int right = num;
    int mid = 0;
    while(left <= right) {
        mid = left + ((right - left) >> 1);
        if((mid == num / mid) && (num % mid == 0)) {
            return true;
        }else if(mid > num / mid) {
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }   
    return false;
}

int main()
{

    bool ans = isPerfectSquare(5);
    cout << ans << endl;
    return 0;
}