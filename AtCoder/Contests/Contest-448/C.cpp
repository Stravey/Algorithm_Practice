#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<int, int>> balls;
    for(int i = 0; i < n; i++) {
        balls.emplace_back(a[i], i + 1);
    }
    sort(balls.begin(), balls.end());

    while(q--) {
        int k;
        cin >> k;
        unordered_set<int> removed;
        for(int i = 1; i <= k; i++) {
            int x;
            cin >> x;
            removed.insert(x);
        }
        for (auto &ball : balls) {
            int first = ball.first;
            int second = ball.second;
            if (removed.find(second) == removed.end()) {
                cout << first << '\n';
                break;
            }
        }
    }   
}

int main()
{
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}