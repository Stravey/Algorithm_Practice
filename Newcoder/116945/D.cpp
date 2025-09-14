#include  <bits/stdc++.h>
using namespace std;
// AC
int main()
{
    int n;
    cin >> n;
    unordered_set<long long> locations;
    map<pair<int, int>, int> cnt;
    const int directions[8][2] = {{2,1},{2,-1},{1,2},{1,-2},{-2,1},{-1,2},{-2,-1},{-1,-2}};
    for(int i = 0;i < n;i++) {
        int x,y;
        cin >> x >> y;
        locations.insert(1LL * x * 1000000 + y);
        for(auto& d : directions) {
            int dx = x + d[0];
            int dy = y + d[1];
            if(dx > 0 && dy > 0) {
                cnt[{dx,dy}]++;
            }
        }
    }
    pair<int, int> best;
    int max_cnt = 0;
    for (auto &p : cnt) {
        auto [pos, c] = p;
        long long key = 1LL * pos.first * 1000000 + pos.second;
        if (!locations.count(key) && c > max_cnt) {
            max_cnt = c;
            best = pos;
        }
    }
    cout << best.first << " " << best.second << endl;
    return 0;
}