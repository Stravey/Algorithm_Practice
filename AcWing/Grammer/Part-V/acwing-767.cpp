#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    
    getline(cin, a);
    
    for(auto & c : a) {
        if(c >= 'a' && c <= 'z') {
            c = (c - 'a' + 1) % 26 + 'a';
        }
        if(c >= 'A' && c <= 'Z') {
            c = (c - 'A' + 1) % 26 + 'A';
        }
    }
    
    cout << a << endl;
    return 0;
}