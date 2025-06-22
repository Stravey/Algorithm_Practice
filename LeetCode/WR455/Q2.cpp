#include <vector>
#include <iostream>

// 完全背包问题 硬币面值

/* class Solution {
public:
    vector<int> findCoins(vector<int>& numWays) {
        int n = numWays.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        vector<int> coins;

        for (int i = 1; i <= n; i++) {
            if (dp[i] > numWays[i - 1]) {
                return vector<int>();
            }
            if (dp[i] < numWays[i - 1]) {
                coins.push_back(i);
                for (int j = i; j <= n; j++) {
                    dp[j] += dp[j - i];
                }
            }
            if (dp[i] != numWays[i - 1]) {
                return vector<int>();
            }
        }
        return coins;
    }
}; */