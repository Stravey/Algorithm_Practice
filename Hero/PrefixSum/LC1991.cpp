#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum[205];
        int n = nums.size();
        sum[0] = nums[0];
        for(int i = 1;i < n;i++) {
            sum[i] = sum[i - 1] + nums[i];
        }
        for(int i = 0;i < n;i++) {
            int idx = i;
            int l = 0, r = 0;
            if(idx) {
                l = sum[idx - 1];
            }
            r = sum[n - 1] - sum[idx];
            if(l == r) {
                return idx;
            }   
        }
        return -1;
    }
};