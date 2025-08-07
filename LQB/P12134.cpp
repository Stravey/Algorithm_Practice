// [蓝桥杯 2025 省 B] 画展布置
// 滑动窗口 双指针
#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
long long n, m;
long long a[N];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n); 
    long long min_L = LLONG_MAX;
    for (int i = 0; i <= n - m; i++) {
        long long current_L = 0;
        for (int j = i + 1; j < i + m; j++) {
            current_L += abs(a[j] * a[j] - a[j - 1] * a[j - 1]);
        }
        if (current_L < min_L) {
            min_L = current_L;
        }
    }
    cout << min_L << endl;
    return 0;
}