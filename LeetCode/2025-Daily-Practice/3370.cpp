#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i < n;i++) {
            int j = (i + nums[i] % n + n) % n;
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
int main()
{
    return 0;
}