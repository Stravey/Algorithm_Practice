#include <iostream>
using namespace std;
class Solution {
public:
    int maxOperations(string s) {
        int count_one = 0;
        int ans = 0;
        int n = s.length();
        for(int i = 0;i < n;i++) {
            if(s[i] == '0') {
                while((i + 1) < n & s[i + 1] == '0') {
                    i++;
                }
                ans += count_one;
            } else {
                count_one++;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}