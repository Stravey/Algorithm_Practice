#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
// 前缀链
int T = 1;
void solve() {
    int n,k;
    cin >> n >> k;

    vector<string> strs(n);
    string longest = "";
    
    // 在字符串数组中找最长的字符串
    for(int i = 0;i < n;i++) {
        cin >> strs[i];
        if(strs[i].length() > longest.length()) {
            longest = strs[i];
        }
    }

    // 是不是所有的最长串都是前缀
    for(const string& s : strs) {
        if(longest.substr(0,s.length()) != s) {
            cout << -1 << endl;
            return;
        }
    }

    // 统计频率
    map<int,int> freq;
    for(auto& s : strs) {
        freq[s.length()]++;
    }

    vector<pair<int,int>> sorted;
    for(auto& f : freq) {
        sorted.push_back(f);
    }
    sort(sorted.begin(),sorted.end());

    vector<int> prefix_sum(sorted.size() + 1,0);
    for(int i = 0;i < sorted.size();i++) {
        prefix_sum[i + 1] = prefix_sum[i] + sorted[i].second;
    }

    bool found = false;
    int target = -1;

    for(int i = 1;i <= sorted.size();i++) {
        if(prefix_sum[i] == k) {
            found = true;
            target = i - 1;
            break;
        }
    }

    if(!found) {
        cout << -1 << endl;
    }

    int target_len = sorted[target].first;
    string prefix = longest.substr(0,target_len);
    string ans = prefix;

    if(target < sorted.size() - 1) {
        int next = sorted[target + 1].first;
        if(next > target_len) {
            char next_char = longest[target_len]; 
            ans += (next_char == '0') ? '1' : '0';
        } else {
            ans += '0';
        }
    } else {
        ans += '0';
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(T--) {
        solve();
    }
    return 0;
}