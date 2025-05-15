#include <bits/stdc++.h>
using namespace std;

string s;
int a,maxx = 0,minn = INT_MAX,b[128] = {0},ans = 0;

bool check(int x) {
    if(x <= 1) {
        return false;
    }
    for(int i = 2; i * i <= x;i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> s;
    int len = s.length();
    for(char c : s) {
        b[c]++;
    }
    for(int i = 0;i < 128;i++) {
        if(b[i] > 0) {
            maxx = max(maxx,b[i]);
            minn = min(minn,b[i]);
        }
    }
    ans = maxx - minn;
    if(check(ans)) {
        cout << "Lucky Word" << endl;
        cout << ans << endl;
    } else {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}