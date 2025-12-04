#include <iostream>
using namespace std;
class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int n = s.size();
        if(s[0] == '0') {
            score++;
        }
        for(int i = 1;i < n;i++) {
            if(s[i] == '1') {
                score++;
            }
        }
        int ans = score;
        for(int i = 1;i < n - 1;i++) {
            if(s[i] == '0') {
                score++;
            } else {
                score--;
            }
            ans = max(ans,score);
        }
        return ans;
    }
};
int main()
{
    return 0;
}