#include <iostream>
#include <vector>
using namespace std;
// 另一种方法 降序排序 return nums[k - 1]
// 平均时间复杂度O(n)  空间复杂度O(1)
class Solution {
public:
    // 快排思想
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size() - 1;
        bool mark = true;
        int ans = 0;
        while(mark) {
            int pivot = nums[left];
            int old_left = left;
            int old_right = right;
            // 快排
            while(left < right) {
                while(left < right && nums[right] <= pivot) right--;
                if(left != right) {
                    nums[left] = nums[right];
                }
                while(left < right && nums[left] >= pivot) left++;
                if(left != right) {
                    nums[right] = nums[left];
                }
            }
            nums[left] = pivot;
            if(left == k - 1) {
                mark = false;
                ans = nums[left];
            } else if(left > k - 1) {
                right = right - 1;
                left = old_left;
            } else {
                left = left + 1;
                right = old_right;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}