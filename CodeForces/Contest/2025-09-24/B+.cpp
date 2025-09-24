#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int T;
    cin >> T;
    while (T--) {
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> black;
        for(int i = 0;i < m;i++) {
            int x;
            cin >> x;
            black.insert(x);
        }
        vector<int> nextA(n + 1),nextB(n + 1);

        int lastA = n,lastB = n;
        for(int i = n - 1;i >= 0;i--) {
            if(s[i] == 'A') {
                nextA[i] = nextB[i] + 1;
            } else {
                nextA[i] = nextA[i] + 1;
                nextB[i] = nextB[i + 1] + 1;
            }
        }
        
        map<int,int> diff;
        diff[1] = 1;
        int cur = 1;
        for(int i = 0;i < n;i++) {
            if(s[i] == 'A') {
                cur++;
            } else {
                auto it = black.upper_bound(cur);
                if(it == black.end()) {
                    cur++;
                } else {
                    cur = *it + 1;
                }
            }
            diff[cur]++;
            if(i < n - 1) {
                diff[cur + 1]--;
            }
        }
        
        vector<int> result;
        int sum = 0;
        int last = 0;
        for(auto& [pos,delta] : diff) {
            if(sum > 0) {
                for(int i = 1;i < pos;i++) {
                    result.push_back(i);
                }
            }
            sum += delta;
            if(sum > 0) {
                result.push_back(pos);
            }
            last = pos;
        }

        set<int> final(black.begin(),black.end());
        for(int cell : result) {
            final.insert(cell);
        }

        cout << final.size() << endl;
        for(auto it = final.begin();it != final.end();it++) {
            if(it != final.begin()) cout << ' ';
            cout << *it;
        }
        cout << '\n';
    }
    return 0;
}