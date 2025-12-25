#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(n + 1,0);
        for(int num : nums) {
            cnt[num]++;
        }
        vector<int> ans;
        for(int i = 1;i <= n;i++) {
            if(cnt[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}