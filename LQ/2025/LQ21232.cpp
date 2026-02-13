#include <iostream>
using namespace std;
using ll = long long;
const ll N = 1e6 + 10;
bool st[N];
int main()
{
    ll n;
    cin >> n;
    ll h[n + 1], cnt[N] = {0}, ans = N * N;
    for(ll i = 1; i <= n; i++) {
        cin >> h[i];
        st[h[i]] = true;
    }
    for(ll i = 1; i < n; i++) {
        if(h[i] != h[i + 1]) {
            cnt[h[i]]++;
        }
    }
    cnt[h[1]]--;
    for(ll i = 1; i < N; i++) {
        if(st[i]) {
            ans = min(ans, i * (cnt[i] + 1));
        }
    }
    cout << ans << endl;
    return 0;
}