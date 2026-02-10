#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check(string s) {
    int n = s.size();
    if(n != 4) return false;
    sort(s.begin(), s.end());
    if(s[0] == s[1] && s[1] == s[2] && s[2] != s[3]) {
        return true;
    }
    if(s[0] != s[1] && s[1] == s[2] && s[2] == s[3]) {
        return true;
    }
    return false;
}
int main()
{
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        if(check(s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}