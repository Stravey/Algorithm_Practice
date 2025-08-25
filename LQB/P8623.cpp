// P8623 [¿∂«≈±≠ 2015  ° B] “∆∂Øæ‡¿Î
#include <bits/stdc++.h>
using namespace std;
int w,m,n,x = 0,y = 1,kx,ky;
int main()
{
    cin >> w >> m >> n;
    if(n > m) {
        swap(m,n);
    }
    for(int i = 1;i <= m;i++) {
        if(y % 2 == 1) {
            x++;
            if(x > w) {
                x = w;
                y++;
            }
        } else {
            x--;
            if(x < 1) {
                x = 1;
                y++;
            }
        }
        if(i == n) {
            kx = x;
            ky = y;
        }
    }
    cout << abs(kx - x) + abs(ky - y) << endl;
    return 0;
}