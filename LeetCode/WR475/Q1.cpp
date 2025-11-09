#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// 2020年408统考代码题改编 数据量 1 ~ 100
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> pos;
        int n = nums.size();
        for(int i = 0;i < n;i++) {
            pos[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for(auto& [num,a] : pos) {
            int m = a.size();
            if(m < 3) {
                continue;
            }
            for(int i = 0;i + 2 < m;i++) {
                int d = 2 * (a[i + 2] - a[i]);
                ans = min(d,ans);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
int main()
{
    return 0;
}