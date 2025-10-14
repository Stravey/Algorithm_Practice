#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
// greedy algorithm
int main()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n),b(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++) cin >> b[i];

    vector<vector<ll>> groups(k + 1);
    for(int i = 0;i < n;i++) {
        groups[a[i]].push_back(b[i]);
    }

    ll emptyJobs = 0;
    vector<ll> candidates;
    
    for(int job = 1;job <= k;job++) {
        if(groups[job].empty()) {
            emptyJobs++;
        } else {
            // °´³É±¾½µÐòÅÅÐò
            sort(groups[job].begin(),groups[job].end(),greater<>());
            int m = groups[job].size();
            for(int i = 1;i < m;i++) {
                candidates.push_back(groups[job][i]);
            }
        }
    }
    if(emptyJobs == 0) {
        cout << 0 << endl;
        return 0;
    }
    sort(candidates.begin(),candidates.end());

    ll totalTime = 0;
    for(int i = 0;i < emptyJobs;i++) {
        totalTime += candidates[i];
    }
    cout << totalTime << endl;
    return 0;
}