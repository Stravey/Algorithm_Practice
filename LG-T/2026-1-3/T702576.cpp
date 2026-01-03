#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int T;
void solve() {
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    string s;
    cin >> s;

    // 分别统计 5 2 0 出现的次数
    int cnt5 = 0,cnt2 = 0,cnt0 = 0;
    for(auto ch : s) {
        if(ch == '5') {
            cnt5++;
        } else if(ch == '2') {
            cnt2++;
        } else {
            cnt0++;
        }
    }

    // 计算将 s 作为子序列嵌入到 "520" 重复模式中所需的最小周期数
    int cycle = 0,pos = 0;
    for(auto ch : s) {
        int target;
        if(ch == '5') {
            target = 0;
        } else if(ch == '2') {
            target = 1;
        } else {
            target = 2;
        }
        if(target >= pos) {
            pos = target + 1;
            if(pos >= 3) {
                pos -= 3;
                cycle++;
            }
        } else {
            cycle++;
            pos = target + 1;
            if(pos >= 3) {
                pos -= 3;
                cycle++;
            }
        }
    }

    int min_cycles = cycle + (pos > 0 ? 1 : 0);
    
    int minn = min({cnt5 + a,cnt2 + b,cnt0 + c});
    if(minn >= min_cycles) {
        cout << minn << endl;
    } else {
        cout << 0 << endl;
    }
}
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}