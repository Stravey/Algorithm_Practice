#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i + 1 < n; i++) {
        if(s[i] != t[i]) {
            s[i] = (s[i] == 'o' ? '*' : 'o');
            s[i + 1] = (s[i + 1] == 'o' ? '*' : 'o');
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}