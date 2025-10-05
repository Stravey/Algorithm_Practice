#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long ans = 0;
    for(int i = 0;i < n / 2;i++) {
        long long tmp = a[i] + a[n - 1 - i];
        ans += tmp * tmp;
    }
    cout << ans << endl;
    return 0;
}