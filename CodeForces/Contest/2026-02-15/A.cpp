#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n); 

    // 判断 67 是否在数组中存在
    bool has67 = false;
    // 1 是否存在
    int cnt = 1;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 67) has67 = true;
        if(a[i] == 1) cnt ++;
    }
    // 由于 n 的范围只有 1 ~ 5 则可以使用二层循环遍历解决
    // 但是由于 67 是个 质数 
    // 因此只有两种情况
    // 1.数组中有 67
    // 2.或者只能是 1 * 67 = 67
    if(has67) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        
        solve();

    }
    return 0;
}