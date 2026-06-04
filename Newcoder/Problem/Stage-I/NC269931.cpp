#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string ans = "";
    for(int i = 0; i < n - 3; i++) {
        ans += s[i];
    }
    cout << ans << endl;
    return 0;
}