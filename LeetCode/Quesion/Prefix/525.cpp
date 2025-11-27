#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> pos = {{0,-1}};
        int ans = 0;
        int s = 0;
        for(int i = 0;i < nums.size();i++) {
            s += nums[i] ? 1 : -1;
            // if(pos.contains(s))  C++20 ÒýÈë
            if(pos.find(s) != pos.end()){
                ans = max(ans,i - pos[s]);
            } else {
                pos[s] = i;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}