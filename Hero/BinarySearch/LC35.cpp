#include <iostream>
#include <vector>
using namespace std;
// 搜索插入位置
// 1 目标值 t 大于数组中的所有数
// 2 目标值 t 在数组中
// 3 目标值 t 不在数组中 一定就在数组红绿边界之间
class Solution {
    bool isGreen(vector<int>& nums, int mid, int t) {
        return nums[mid] >= t;
    }
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
    int searchInsert(vector<int>& nums, int target) {
        return bSearch(nums, target);
    }
};
int main()
{
    return 0;
}