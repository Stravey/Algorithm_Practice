#include <iostream>
#include <vector>
using namespace std;
// 只出现一次的数字个数
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int num : nums){
            ans ^= num;
        }
        return ans;
    }
};
int main()
{
    return 0;
}