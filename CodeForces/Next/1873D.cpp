#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int ans = 0;
        int i = 0;
        while(i < n) {
            if(s[i] == 'B') {
                ans++;
                i += k;
            } else {
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}