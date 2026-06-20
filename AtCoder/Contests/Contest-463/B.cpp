#include <iostream>
#include <cstring>
using namespace std;

// 模拟
void solve() {
    int n;
    cin >> n;
    char x;
    cin >> x;
    int idx;
    if(x == 'A') idx = 0;
    else if(x == 'B') idx = 1;
    else if(x == 'C') idx = 2;
    else if(x == 'D') idx = 3;
    else idx = 4;

    bool ok = false;
    string s;
    while(n--) {
        cin >> s;
        if(s[idx] == 'o') {
            ok = true;
        }
    }
     cout << (ok ? "Yes" : "No") << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}