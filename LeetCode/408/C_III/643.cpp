#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        // 初始化滑动窗口
        for(int i = 0;i < k;i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        // 滑动窗口
        for(int i = k;i < n;i++) {
            // 减去左边出去的元素，加上右边新进入的元素
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(sum,maxSum);
        }
        return (double)maxSum / k;
    }
};
int main()
{
    return 0;
}