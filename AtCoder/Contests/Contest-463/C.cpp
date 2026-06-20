#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define int long long
using namespace std;

typedef pair<int, int> PII;

void solve() {
    int n, q;
    cin >> n;
    vector<PII> people(n);
    for(int i = 0; i < n; i++) {
        cin >> people[i].first >> people[i].second;
    }
    cin >> q;
    vector<PII> queries(q);
    for(int i = 0; i < q; i++) {
        cin >> queries[i].first;
        queries[i].second = i;
    }

    // 离开时间大到小排序
    sort(people.begin(), people.end(), [](const PII& a, const PII& b) {
        return a.second > b.second;
    });

    // 查询时间大到小排序
    sort(queries.begin(), queries.end(), [](const PII& a, const PII& b) {
        return a.first > b.first;
    });

    vector<int> ans(q);
    // 大根堆
    priority_queue<int> heap;
    int idx = 0;
    int maxx = -1;

    for(auto & query : queries) {
        int a = query.first;
        int b = query.second;

        while(idx < n && people[idx].second > a) {
            maxx = max(maxx, people[idx].first);
            idx++;
        }

        ans[b] = maxx;
    }

    for(int i = 0; i < q; i++) {
        cout << ans[i] << '\n';
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