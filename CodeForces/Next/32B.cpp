#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == '.') {
            ans += '0';
            i++;
        } else {
            i++;
            if(s[i] == '.') {
                ans += '1';
            } else {
                ans += '2';
            }
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}