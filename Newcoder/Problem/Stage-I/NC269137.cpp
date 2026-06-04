#include <bits/stdc++.h>
using namespace std;

// 找到中点 分两段输出即可
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    string s1 = "";
    string s2 = "";
    for(int i = 0; i < n / 2; i++) {
        s1 += s[i];
    }
    for(int i = n / 2; i < n; i++) {
        s2 += s[i];
    }
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}