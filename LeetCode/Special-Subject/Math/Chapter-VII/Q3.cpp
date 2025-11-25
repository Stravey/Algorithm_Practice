#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for(int num : nums) {
            ++cnt[num];
        }
        int ans = 0;
        for(const auto& [a,b] : cnt) {
            if(b == 1) {
                ans = a;
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