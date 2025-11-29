#include <iostream>
#include <vector>
using namespace std;
int T;
bool checkPartition(vector<int>& batteries) {
    int n = batteries.size();
    int sum = 0;
    for(int num : batteries) {
        sum ^= num;
    }
    if(sum == 0) {
        return true;
    }
    return false;
}
void solve() {
    int n;
    cin >> n;
    vector<int> batteries(n);
    for(int i = 0;i < n;i++) {
        cin >> batteries[i];
    }
    if(checkPartition(batteries)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
signed main() 
{
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}