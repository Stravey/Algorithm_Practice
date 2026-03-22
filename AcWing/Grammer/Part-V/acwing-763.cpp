#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int x = s1.size(), y = s2.size();
    if(x - y == 3 || x - y == -2 || x - y == -1){
        cout << "Player1" << endl;
    }else if(x == y){
        cout << "Tie" << endl;
    }else {
        cout << "Player2" << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}