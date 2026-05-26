#include<bits/stdc++.h> 

using namespace std;

const int mod = 1e9 + 7;

// 公式：连续 l 个 1，能产生 l * ( l + 1 ) / 2 个子串

int main( )
{
    int l = 0, ans = 0;
    string s;
    cin >> s;
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            l++;
        }
        if(s[i] == '0' || i == n - 1) {
            ans += (l + 1) * l / 2;
            ans %= mod;
            l = 0;
        }
    }
    cout << ans % mod << endl;
    return 0;
}