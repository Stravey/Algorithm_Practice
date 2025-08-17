#include <iostream>
#include <vector>
#include <unordered_map>

/* long long minArraySum(vector<int>& nums, int k) {
    int n = nums.size();
    vector<long long> v(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        v[i + 1] = v[i] + nums[i];
    }
    unordered_map<int, int> m;
    m[0] = 0;
    vector<long long> dp(n + 1, 0);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int cur = v[i] % k;
        dp[i] = dp[i - 1] + nums[i - 1];
        if (m.find(cur) != m.end()) {
            int j = m[cur];
            dp[i] = min(dp[i], dp[j]);
        }
        m[cur] = i;
    }
    return dp[n];
} */

int main()
{
    return 0;
}