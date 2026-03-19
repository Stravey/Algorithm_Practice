#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if(a == b) {
        ans = 24;
    } else if(a < b) {
        ans = b - a;
    } else if(a > b) {
        ans = b + 24 - a;
    }
    cout << "O JOGO DUROU " << ans << " HORA(S)" << endl;
    return 0;
}