#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, maxx;
    
    while(cin >> s) {
        if(s.back() == '.') s.pop_back();
        if(s.size() > maxx.size()) {
            maxx = s;
        } 
    }
    
    cout << maxx << endl;
    return 0;
}