#include <bits/stdc++.h>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    // 双指针
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        while(l < r) {
            if(nums[l] + nums[r] == target) {
                return vector<int>{nums[l], nums[r]};
            } else if(nums[l] + nums[r] < target) {
                l++; 
            } else if(nums[l] + nums[r] > target) {
                r--;
            }
        }
        return vector<int>();
    }
};

int main()
{

    return 0;
}