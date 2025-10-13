#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(const auto& num : nums) {
            for(int x : num) {
                ++freq[x];
            }
        }
        vector<int> ans;
        for(const auto& [k,v] : freq) {
            if(v == n) {
                ans.push_back(k);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    return 0;
}