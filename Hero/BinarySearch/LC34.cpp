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
    vector<int> searchRange(vector<int>& nums, int target) {
        int idx = bSearch(nums, target);
        if(idx == nums.size()) {
            return {-1, -1};
        }
        if(nums[idx] != target) {
            return {-1, -1};
        }
        vector<int> ans;
        ans.push_back(idx);
        int new_idx = bSearch(nums, target + 1);
        ans.push_back(new_idx - 1);
        return ans;
    }
};