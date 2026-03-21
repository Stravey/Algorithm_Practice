#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string X, Y;
    cin >> X >> Y;
    int Q;
    cin >> Q;
    vector<string> S(Q + 1);
    S[1] = X;
    S[2] = Y;
    for(int i = 3; i <= Q; i++) {
        S[i] = S[i - 1] + S[i - 2];
    }
    while(Q--) {
        int L, R;
        char c;
        cin >> L >> R >> c;
        
    }
}

signed main() 
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}