#include <iostream>
#include <vector>
using namespace std;
class Solution {
    // 判断边界函数
    bool isGreen(vector<int>& nums, int mid, int t) {
        return nums[mid] >= t;
    }
    // 二分查找模板
    int bSearch(vector<int>& nums, int t) {
        int l = -1;
        int r = nums.size();
        while(l + 1 < r) {
            int mid = (l + r) / 2;
            if( isGreen(nums, mid, t) ) {
                r = mid;
            } else {
                l = mid;
            }
        }
        return r;
    }
public:
    int search(vector<int>& nums, int target) {
        // 找到该数所在下标
        int idx = bSearch(nums, target);
        // 如果该数的下标等于数组长度 则此数不在该数组中
        if(idx == nums.size()) {
            return -1;
        }
        if(nums[idx] != target) {
            return -1;
        }
        return idx;
    }
};
int main()
{
    return 0;
}