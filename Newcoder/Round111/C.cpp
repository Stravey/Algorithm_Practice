#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for(ll i = 0;i < n;i++) cin >> a[i];

    if(k == 0 || x == 1) {
        for(ll num : a) {
            cout << num << " ";
        }
        return 0;
    }

    ll m = min(n,k);

    deque<ll> front;
    ll start = x - 1;
    for(ll i = 0;i < m;i++) {
        front.push_back(a[(start + i) % n]);
    }

    vector<ll> used(n,false);
    for(ll i = 0;i < m;i++) {
        used[(start + i) % n] = true;
    }

    vector<ll> ans;
    for(ll i = 0;i < n;i++) {
        if(!used[i]) {
            ans.push_back(a[i]);
        }
    }

    for(int num : ans) {
        cout << num << " ";
    }
    for(int num : front) {
        cout << num << " ";
    }
    
    return 0;
}
