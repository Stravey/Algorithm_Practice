#include <iostream>
#include <vector>
using namespace std;
class Solution {
    void selectionSort(vector<int>& a) {
        int n = a.size();
        for(int i = 0;i < n;i++) {
            int minn = i;
            for(int j = i + 1;j < n;j++) {
                if(a[j] < a[minn]) {
                    minn = j;
                }
            }
            int tmp = a[minn];
            a[minn] = a[i];
            a[i] = tmp;
        }
    }
public:
    int dominantIndex(vector<int>& nums) {
        int maxx = 0;
        for(int i = 0;i < nums.size();i++) {
            if(nums[i] > nums[maxx]) {
                maxx = i;
            }
        }
        selectionSort(nums);
        int n = nums.size();
        if(nums[n - 1] > 2 * nums[n - 2]) {
            return maxx;
        }
        return -1;
    }
};