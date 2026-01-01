#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
    static bool cmp(pair<int,int> &o1,pair<int,int> &o2) {
        if(o1.second == o2.second) {
            return o1.first > o2.first;
        } else {
            return o1.second > o2.second;
        }
    }
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        unordered_map<int,int> cnt;
        for(int i = 0;i < nums.size();i++) {
            cnt[nums[i]]++;
            int left = i - k + 1;
            if(left < 0) {
                continue;
            }
            vector<pair<int,int>> a(cnt.begin(),cnt.end());
            sort(a.begin(),a.end(),cmp);
            int sum = 0;
            int q = cnt.size();
            for(int j = 0;j < min(q,x);j++) {
                sum += a[j].second * a[j].first;
            }
            ans.push_back(sum);
            cnt[nums[left]]--;
            if(cnt[nums[left]] == 0) {
                cnt.erase(nums[left]);
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}