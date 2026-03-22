#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> b;
    string s;
    while(cin >> s) {
        b.push_back(s);
    }
    for(int i = b.size() - 1; i >= 0; i--) {
        cout << b[i] << " ";
    }
    return 0;
}