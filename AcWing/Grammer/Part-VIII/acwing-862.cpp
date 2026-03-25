#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

map<int, pair<double, string>> mp; 

int main() {
    int i = 0, n = 0;
    double f;
    string s;
    
    cin >> i;
    
    for(int j = 0; j < i; j++) {
        cin >> n >> f >> s;
        mp[n] = {f, s}; 
    }
    
    for(auto& e : mp) {
        cout << fixed << setprecision(2) 
             << e.first << " " 
             << e.second.first << " " 
             << e.second.second << endl;
    }
    
    return 0;
}