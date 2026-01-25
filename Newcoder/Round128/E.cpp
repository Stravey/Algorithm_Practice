#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int cnt1 = 0;
    for(char c : s) {
        if(c == '1') cnt1++;
    }
    if(cnt1 <= 1) {
        cout << s << endl;
        return 0;
    }
    int first = -1, second = -1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            if(first == -1) {
                first = i;
            } else if(second == -1) {
                second = i;
                break;
            }
        }
    }
    string ans1 = "", ans2 = "";
    int idx1 = 0, idx2 = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            if(i == first) {
                ans1 += '1';
            } else if(i == second) {
                continue;  
            } else {
                ans1 += '2';
            }
        } else {
            ans1 += s[i];
        }
    }

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            if(i == second) {
                ans2 += '1';
            } else if(i == first) {
                continue;  // É¾³ý
            } else {
                ans2 += '2';
            }
        } else {
            ans2 += s[i];
        }
    }
    
    if(cnt1 % 2 == 0) {
        string ans3 = "";
        for(char c : s) {
            ans3 += (c == '1') ? '2' : c;
        }
        if(ans3 < ans1 && ans3 < ans2) {
            cout << ans3 << endl;
        } else if(ans1 < ans2) {
            cout << ans1 << endl;
        } else {
            cout << ans2 << endl;
        }
    } else {
        cout << (ans1 < ans2 ? ans1 : ans2) << endl;
    }
    
    return 0;
}