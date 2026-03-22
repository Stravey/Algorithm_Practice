#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] <= '9' && s[i] >= '0') {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}