#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = 0;
        int cnt = 0,n = prices.size();
        for(int i = 0;i < n;i++) {
            if(i > 0 && prices[i] == prices[i - 1] - 1) {
                cnt++;
            } else {
                cnt = 1;
            }
            ans += cnt;
        }
        return ans;
    }
};
int main()
{
    return 0;
}