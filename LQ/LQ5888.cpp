#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    int ans = 0;
    cin >> n >> k;
    // 定义玩具高度数组
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // 定义极差数组
    vector<int> ac(n - 1);
    for(int i = 1;i < n;i++) {
        ac[i - 1] = a[i] - a[i - 1];
    }
    sort(ac.begin(), ac.end());
    for(int i = 0;i < n - k;i++) {
        ans += ac[i];
    }
    cout << ans << endl;
    return 0;
}