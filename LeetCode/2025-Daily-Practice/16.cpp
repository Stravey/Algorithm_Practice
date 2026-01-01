#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closet = 1e7;
        for(int i = 0;i < nums.size();i++) {
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if(abs(closet - target) > abs(sum - target)) {
                    closet = sum;
                }
                if(sum > target) {
                    r--;
                } else if(sum == target) {
                    return target;
                } else {
                    l++;
                }   
            }
        }
        return closet;
    }
};
int main()
{
    return 0;
}