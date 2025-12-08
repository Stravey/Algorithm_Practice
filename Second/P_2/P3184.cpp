#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T = 1;
void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;
    cin >> N >> Q;
    vector<int> a(N);
    for(int i = 0;i < N;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    while(Q--) {
        int A,B;
        cin >> A >> B;
        auto left = lower_bound(a.begin(),a.end(),A);
        auto right = upper_bound(a.begin(),a.end(),B);
        int count = distance(left,right);
        cout << count << endl;
    }
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}