#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int n = s.size();
    for(int i = 0; i < n; i++) {
        cout << s[i] << ' ';
    }
    
    return 0;
}