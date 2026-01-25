#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    
    int k = (n + 1) / 2;
    long long min_cost = 1e18;
    int best_target = -1;
    
    for (int i = 0; i <= n - k; i++) {
        int median_idx = i + k / 2;
        int target = b[median_idx];
        
        long long cost = 0;
        for (int j = i; j < i + k; j++) {
            cost += abs(b[j] - target);
        }
        
        if (cost < min_cost) {
            min_cost = cost;
            best_target = target;
        }
    }
    
    vector<pair<int, int>> dist;  
    for (int i = 0; i < n; i++) {
        dist.push_back({abs(a[i] - best_target), i});
    }
    
    sort(dist.begin(), dist.end());
    
    vector<int> result = a;
    for (int i = 0; i < k; i++) {
        result[dist[i].second] = best_target;
    }
    
    for (int x : result) cout << x << " ";
    
    return 0;
}