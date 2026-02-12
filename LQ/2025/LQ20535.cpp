#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int L;
    cin >> L;
    if (L == 1) {
        cout << 0 << '\n';
        return 0;
    }
    // 计算 d[i] = i 的正因子个数
    vector<int> d(L + 1, 0);
    for (int i = 1; i <= L; ++i) {
        for (int j = i; j <= L; j += i) {
            ++d[j];
        }
    }
    // 计算 g[t] = 满足 y1*y2 <= t 的正整数对 (y1, y2) 的个数
    // 即 g[t] = sum_{i=1}^{t} floor(t/i) = sum_{i=1}^{t} d(i) 的前缀和
    vector<long long> g(L + 1, 0);
    for (int i = 1; i <= L; ++i) {
        g[i] = g[i - 1] + d[i];
    }
    long long ans = 0;
    int limit = L - 1;
    // 枚举 xA = a, xB = b
    for (int a = 1; a <= limit; ++a) {
        int B = limit / a;  // b 的最大值
        for (int b = 1; b <= B; ++b) {
            int t = L - a * b;  // 剩余可分配的值
            ans += g[t];        // 加上对应的 y 对数目
        }
    }
    cout << ans << '\n';
    return 0;
}