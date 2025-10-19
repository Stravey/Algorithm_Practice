#include <iostream>
#include <cstring>
#include <set>
using namespace std;
// 控制一定窗口大小 枚举数组中的数据 统计1 2 3个数
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (char c : s) {
            if (c == '1') cnt1++;
            else if (c == '2') cnt2++;
            else if (c == '3') cnt3++;
        }
        
        if (cnt1 == 0 || cnt2 == 0 || cnt3 == 0) {
            cout << -1 << endl;
            continue;
        }

        int ans = 2;
        for(int i = 0;i <= n - 3;i++) {
            set<char> st;
            for(int j = 0;j < 3;j++) {
                st.insert(s[i + j]);
            }
            if(st.size() == 3) {
                ans = 0;
                break;
                }
            } 
            if(ans == 0) {
                cout << 0 << endl;
                continue;
            }
            for(int i = 0;i <= n - 3;i++) {
                set<char> st;
                for(int j = 0;j < 3;j++) {
                    st.insert(s[i + j]);
                }
                if(st.size() == 2) {
                    ans = 1;
                    break;
                }
            }
        cout << ans << endl;
    }
    return 0;
}