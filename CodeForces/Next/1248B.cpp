#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using ll = long long;
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll sum_x = 0,sum_y = 0;
    int mid = n / 2;
    for(int i = 0;i < mid;i++) {
        sum_y += a[i];
    }
    for(int j = mid;j < n;j++) {
        sum_x += a[j];
    }
    ll ans = sum_x * sum_x + sum_y * sum_y;
    cout << ans << endl;
    return 0;
}