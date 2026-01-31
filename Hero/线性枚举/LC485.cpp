#include <iostream>
#include <vector>
using namespace std;
// 最大连续1的个数
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int pre = 0;
        int maxx = 0;
        for(int i = 0;i < nums.size();i++) {
            if(nums[i] == 1) {
                pre += 1;
                if(pre > maxx) {
                    maxx = pre;
                }
            } else {
                pre = 0;
            }
        }
        return maxx;
    }
};