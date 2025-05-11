#include <iostream>
#include <cstring>
using namespace std;

int n,ans = 0;
string s;

int main()
{
    cin >> n;
    cin >> s;
    for(int i = 0;i < s.size() - 1;i++) {
        if(s[i] == 'V' && s[i + 1] == 'K') {
            ans++;
            s[i] = 'X';
            s[i + 1] = 'X'; 
        }
    }
    for(int i = 0;i < s.size() - 1;i++) {
        if(s[i] != 'X' && s[i] == s[i + 1]) {
            ans++;
            break;
        }
    }
    cout << ans;
    return 0;
}
