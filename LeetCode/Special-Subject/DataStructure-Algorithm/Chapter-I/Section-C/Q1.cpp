#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int prev = 0;
        for(int num : target) {
            for(int i = 0;i < num - prev - 1;i++) {
                ans.emplace_back("Push");
                ans.emplace_back("Pop");
            }
            ans.emplace_back("Push");
            prev = num;
        }
        return ans;
    }
};
int main()
{
    return 0;
}