#include <iostream>
#include <string>
using namespace std;
using ll = long long;
int main()
{
    string s;
    cin >> s;
    ll ans = 0;
    for(int i = 0;i < s.size();i++) {
        if(i + 2 > (int)s.size() - 1) {
            continue;
        }
        ll l = 0, q = 0, b = 0;
        for(int j = i;j <= i + 2;j++) {
            if(s[j] == 'l') {
                l++;
            } else if(s[j] == 'q') {
                q++;
            } else if(s[j] == 'b') {
                b++;
            }
        }
        if(l == 1 && q == 1 && b == 1) {
            i += 2;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}