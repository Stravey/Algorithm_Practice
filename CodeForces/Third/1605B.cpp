#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int zero = count(s.begin(),s.end(),'0');
        vector<int> ans;
        for(int i = 0;i < zero;i++) {
            if(s[i] == '1') {
                ans.push_back(i + 1);
            }
        }
        for(int i = zero;i < n;i++) {
            if(s[i] == '0') {
                ans.push_back(i + 1);
            }
        }
        if(ans.empty()) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
            cout << ans.size() << " ";
            for(int num : ans) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}