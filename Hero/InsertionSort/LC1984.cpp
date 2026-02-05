#include <iostream>
#include <vector>
using namespace std;
// 学生分数最小差值
class Solution {
    void insertionSort(vector<int>& a) {
        for(int i = 1;i < a.size();i++) {
            int x = a[i];
            int j;
            for(j = i - 1;j >= 0;j--) {
                if(x < a[j]) {
                    a[j + 1] = a[j];
                } else {
                    break;
                }
            }
            a[j + 1] = x;
        }
    }
public:
    int minimumDifference(vector<int>& nums, int k) {
        insertionSort(nums);
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0;i + k - 1 < n;i++) {
            int l = i;
            int r = i + k - 1;
            ans = min(ans, nums[r] - nums[l]);
        }
        return ans;
    } 
};
