#include <iostream>
#include <vector>
using namespace std;
// ¼ÆÊýÅÅÐò
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt(101,0);
        int n = nums.size();
        for(int i = 0;i < n;i++) {
            cnt[nums[i]]++;
        }
        for(int i = 1;i <= 100;i++) {
            cnt[i] += cnt[i - 1];
        }
        vector<int> ans;
        for(int i = 0;i < n;i++) {
            ans.push_back(nums[i] == 0 ? 0 : cnt[nums[i] - 1]);
        }
        return ans;
    }
};
int main()
{
    return 0;
}