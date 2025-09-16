#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // ¶þ·Ö
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) {
            return -1;
        }
        int left = 0;
        int right = n - 1;
        int dot = n - 1;
        while(left < right) {
            int mid = (left + right) >> 1;
            if(nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        dot = left - 1;
        int t = -1;
        t = find(nums,target,0,dot);
        if(t == -1) t = find(nums,target,dot + 1,n - 1);
        return t;
    }

    int find(vector<int>& nums,int target,int left,int right) {
        while(left <= right) {
            int mid = (left + right) >> 1;
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
};

unsigned main()
{
    return 0;
}