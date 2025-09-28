#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        if(n == 0) return {-1,-1};

        int l = 0;
        int r = n - 1;
        while(l < r) {
            int mid = (l + r) >> 1;
            if(nums[mid] > target) {
                r = mid - 1;
            } else if(nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        vector<int> ans;
        if(nums[l] != target) {
            return {-1,-1}; 
        } else {
            ans.push_back(l);
        }

        l = 0;
        r = n - 1;
        while(l < r) {
            int mid = l + r + 1 >> 1;
            if(nums[mid] > target) {
                r = mid - 1;
            } else if(nums[mid] < target) {
                l = mid + 1;
            } else {
                l = mid;
            }
        } 
        ans.push_back(l);
        return ans;
    }
};

int main()
{
    return 0;
}