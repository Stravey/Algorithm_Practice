#include <iostream>
#include <cstring>
using namespace std;
int T = 1;
inline void solve() {
    string s;
    cin >> s;
    if(s[1] == s[2]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
int main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}