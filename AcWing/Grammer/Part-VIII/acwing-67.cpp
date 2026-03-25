#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int n = nums.size();
        int cnt = 0;
        for(int x : nums) {
            if(x == k) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    return 0;
}
