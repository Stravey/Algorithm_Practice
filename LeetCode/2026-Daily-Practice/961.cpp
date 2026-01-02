#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int len = nums.size();
        int n = len / 2;
        int hash[10005] = {0};
        int ans = 0;
        for(int x : nums) {
            hash[x]++;
            if(hash[x] == n) {
                ans = x;
                break;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}