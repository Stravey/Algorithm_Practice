#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
// 海明码的海明距离
class Solution {
public:
    int hammingWeight(int n) {
        string ans = "";
        int flag = 1;
        for(int i = 0;i < 32;i++) {
            if((n & flag) != 1) {
                ans = '1' + ans;
            } else {
                ans = '0' + ans;
            }
            flag <<= 1;
        }
        int cnt = 0;
        for(int i = 0;i < ans.size();i++) {
            if(ans[i] == 1) {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    return 0;
}