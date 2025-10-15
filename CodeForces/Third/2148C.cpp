#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// greedy algorithm
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> req(n);
        for (int i = 0; i < n; i++) {
            cin >> req[i].first >> req[i].second;
        }
        int ans = 0;
        int prev_time = 0, prev_side = 0;
        for (int i = 0; i < n; i++) {
            int current_time = req[i].first;
            int current_side = req[i].second;
            int time_gap = current_time - prev_time;
            int min_runs = abs(current_side - prev_side);
            if (min_runs > time_gap) {
                continue;
            }
            int max_runs = time_gap;
            int actual_runs = min_runs;
            if ((max_runs - min_runs) >= 2) {
                actual_runs = max_runs - ((max_runs - min_runs) % 2);
            }
            ans += actual_runs;
            prev_time = current_time;
            prev_side = current_side;
        }
        // ×îºóÒ»¶Î
        int last_gap = m - prev_time;
        ans += last_gap;
        cout << ans << "\n";
    }
    return 0;
}