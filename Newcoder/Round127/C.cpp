#include <iostream>
#include <cstring>
using namespace std;
int T;
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int pos = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] >= '5') {
            pos = i;
        }
    }
    if (pos == -1) {
        s[n - 1] = '0';
        cout << s << endl;
        return;
    }
    s[pos] = '0';
    int carry = 1;
    for (int i = pos - 1; i >= 0; i--) {
        if (carry == 0) break;
        int digit = (s[i] - '0') + carry;
        if (digit >= 10) {
            s[i] = '0';
            carry = 1;
        } else {
            s[i] = digit + '0';
            carry = 0;
        }
    }
    if (carry) {
        s = "1" + s;
        n++;
    }
    for (int i = pos + 1; i < n; i++) {
        s[i] = '0';
    }
    cout << s << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}