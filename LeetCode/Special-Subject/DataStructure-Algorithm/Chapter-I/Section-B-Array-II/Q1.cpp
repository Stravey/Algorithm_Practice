#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(n + 1,0);
        int duplicate = -1,missing = -1;
        for(int num : nums) {
            cnt[num]++;
        }
        for(int i = 1;i <= n;i++) {
            if(cnt[i] == 2) {
                duplicate = i; 
            } else if(cnt[i] == 0) {
                missing = i;
            }
        }
        return {duplicate,missing};
    }
};
int main()
{
    return 0;
}