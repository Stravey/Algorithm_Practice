#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    string s;
    cin >> s;
    int cnt = 1;
    int sum = 0;
    for(int i = 0;i < s.size() - 1;i++)  {
      	if(s[i] != '-') {
            sum += ((s[i] - 48) * cnt) % 11;
            cnt++;
        }
    }
    sum %= 11;
    if(sum == 10) {
        if(s[s.size() - 1] == 'X') {
            cout << "Right";
        }
        else {
            for(int i = 0;i < s.size() - 1;i++) {
                cout << s[i];
            }
            cout << "X";
        }
    }
    else {
        if((s[s.size() - 1] - 48) == sum) {
            cout << "Right";
        }
        else {
            for(int i = 0;i < s.size() - 1;i++) {
                cout << s[i];
            }
            cout << sum;
        }
    }
    return 0;
}
