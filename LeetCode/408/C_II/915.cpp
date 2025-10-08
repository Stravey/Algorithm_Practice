#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = nums[0],right[n - 1] = nums[n - 1];

        for(int i = 1;i < n;i++) {
            left[i] = max(left[i - 1],nums[i]);
        }

        for(int j = n - 2;j >= 0;j--) {
            right[j] = min(right[j + 1],nums[j]);
        }

        for(int i = 0;i < n;i++) {
            if(left[i] <= right[i + 1]) {
                return i + 1;
            }
        }
        return -1;
    }
};
int main()
{
    return 0;
}