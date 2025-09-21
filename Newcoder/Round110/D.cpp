#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
typedef long long ll;
using namespace std;
// AC
// 排序 + 前缀和
int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        // 排序数组
        sort(a.begin(),a.end());
        // 前缀和数组
        vector<ll> p(n + 1,0);
        for(int i = 0;i < n;i++) {
            p[i + 1] = p[i] + a[i];
        }

        int mid = (n - 1) / 2;
        ll min_bal = LLONG_MAX;

        for(int i = 0;i < n;i++) {
            ll balance = 0;
            if(i <= mid) {
                ll m = a[mid + 1];
                ll left = m * mid - (p[mid + 1] - a[i]);
                ll right = (p[n] - p[mid + 1]) - m * (n - mid - 1);
                balance = left + right;
            } else {
                ll m = a[mid];
                ll left = m * (mid + 1) - p[mid + 1];
                ll right = (p[n] - p[mid + 1]  - a[i]) - m * (n - mid - 2);
                balance = left + right;
            }
            min_bal = min(min_bal,balance);
        }
        cout << min_bal << endl;
    }
    return 0;
}