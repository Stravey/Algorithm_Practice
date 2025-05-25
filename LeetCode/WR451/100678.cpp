#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//木材运输的最小成本

// 法1 适用于数据量小的
/* long long minCuttingCost(int n, int m, int k) {
    if(n <= k && m <= k) {
        return 0;
    }
    vector<long> ways;
    for (int a = 0; a <= n; a++) {
        for (int b = 0; b <= m; b++) {
            if (a <= k && (n - a) <= k && b <= k && (m - b) <= k) {
                long cost = a * (n - a) + b * (m - b);
                ways.push_back(cost);
            }
        }
    }
    if (ways.empty()) {
        return -1;
    } else {
        long min_cost = *min_element(ways.begin(), ways.end());
        return min_cost;
    }
} */

// 法2 适用于数据量大的 优化后的
long long minCuttingCost(int n, int m, int k) {
    if(n <= k && m <= k) {
        return 0;
    }
    if (n > 2 * k || m > 2 * k) {
        return 0;
    }
    long long cost_n = 0, cost_m = 0;
    bool valid_n = true, valid_m = true;
    if (n > k) {
        if (n - k <= k) {
            cost_n = (long long)k * (n - k);
        } else {
            valid_n = false;
        }
    }
    if (m > k) {
        if (m - k <= k) {
            cost_m = (long long)k * (m - k);
        } else {
            valid_m = false;
        }
    }
    if (valid_n && valid_m) {
        return cost_n + cost_m;
    } else {
        return -1;
    }
}

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    long long ans = minCuttingCost(x,y,z);
    cout << ans << endl;
    return 0;
}