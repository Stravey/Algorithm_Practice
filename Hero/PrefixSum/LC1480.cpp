#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        sum.push_back(nums[0]);
        int n = nums.size();
        for(int i = 1;i < n;i++) {
            int x = sum[i - 1] + nums[i];
            sum.push_back(x);
        }
        return sum;
    }
};