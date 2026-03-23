#include <bits/stdc++.h>

using namespace std;

int sum(int l, int r) {
    int ans = 0;
    for(int i = l; i <= r; i++) {
        ans += i;
    }
    return ans;
}

int main()
{
    int l, r;
    cin >> l >> r;
    cout << sum(l ,r) << endl;
    return 0;
}