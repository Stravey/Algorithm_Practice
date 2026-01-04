#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int T = 1;
void solve() {
    string s;
    cin >> s;
    string answer = "ABD";
    if(s == answer) {
        cout << 4 << endl;
        return;
    }
    bool flag  = true;
    for(char c : s) {
        if(answer.find(c) == string::npos) {
            flag = false;
            break;
        }
    }
    if(flag && s.size() < answer.size()) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }
}
signed main()
{
    while(T--) {
        solve();
    }
    return 0;
}