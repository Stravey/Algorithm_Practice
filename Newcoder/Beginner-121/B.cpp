#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ll n, t;
    cin >> n >> t;  
    vector<int> a(n), b(n);  
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    ll player_sum = 0;
    for(int x : a) {
        player_sum += x;
    }
    if(player_sum >= t) {
        cout << 0 << endl;
        return 0;
    }
    ll need = t - player_sum;
    vector<pair<int, int>> players;
    
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) { 
            players.emplace_back(a[i], b[i]);
        }
    }
    sort(players.rbegin(), players.rend());
    ll robots = 0;
    for(auto& p : players) {
        ll con = (ll)p.first * p.second;
        if(con >= need) {
            robots += (need + p.first - 1) / p.first;
            need = 0;
            break;
        }
        robots += p.second;
        need -= con;
    }
    cout << (need == 0 ? robots : -1) << endl;
    return 0;
}