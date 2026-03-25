#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        int n = nums.size(), i;
        for(i = 0; i < n; i++) {
            if(nums[i] != i) {
                return i;
            }
        }
        return i;
    }
};

int main()
{
    return 0;
}
