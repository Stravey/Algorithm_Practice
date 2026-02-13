#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m, temp = 0;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < n; i++) {
        if(s[i] == t[i]) {
            temp++;
        }
    }
    if(m <= temp) {
        cout << n - (temp - m);
    } else {
        cout << n - (m - temp);
    }
    return 0;
}