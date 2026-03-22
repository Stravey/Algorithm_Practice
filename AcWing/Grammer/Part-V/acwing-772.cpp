#include <bits/stdc++.h>

using namespace std;

// 哈希的思想
int cnt[26];

int main()
{
    int idx = -1;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        cnt[s[i] - 'a']++;
    }
    for(int i = 0; i < s.size(); i++) {
        if(cnt[s[i] - 'a'] == 1) {
            idx = i;
            break;
        }
    }
    if(idx == -1) {
        cout << "no" << endl;
    } else {
        cout << s[idx] << endl;
    }
    return 0;
}