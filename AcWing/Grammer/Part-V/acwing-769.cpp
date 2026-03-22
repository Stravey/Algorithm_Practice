#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char c;
    cin >> c;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == c) {
            s[i] = '#';
        }
    }
    for(auto & c : s) {
        cout << c;
    }
    return 0;
}