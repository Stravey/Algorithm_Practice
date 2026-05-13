#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n), L(n), R(n);
    for(int &x : a) cin >> x;

    L[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        L[i] = max(L[i - 1], a[i]);
    }

    R[n - 1] = a[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        R[i] = min(R[i + 1], a[i]);
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == L[i] || a[i] == R[i]) ans++;
    }

    cout << ans << endl;
    return 0;
}
