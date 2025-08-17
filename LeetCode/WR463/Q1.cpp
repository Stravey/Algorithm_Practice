// Q1. 按策略交易股票的最佳时机
#include <iostream>
#include <vector>

/* long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
    int n = prices.size();
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += strategy[i] * prices[i];
    }
    vector<long long> prefix_sum(n + 1, 0);
    vector<long long> strategy_prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + prices[i];
        strategy_prefix_sum[i + 1] = strategy_prefix_sum[i] + strategy[i] * prices[i];
    }
    long long cnt = 0;
    int half_k = k / 2;
    for (int l = 0; l <= n - k; ++l) {
        int r = l + k - 1;
        long long sum_prices = prefix_sum[r + 1] - prefix_sum[l + half_k];
        long long sum_strategy = strategy_prefix_sum[r + 1] - strategy_prefix_sum[l];
        long long ans_1 = sum_prices - sum_strategy;
        if (ans_1 > cnt) {
            cnt = ans_1;
        }
    }
    return ans + cnt;
} */

int main()
{
    return 0;
}
