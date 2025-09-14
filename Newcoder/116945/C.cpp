#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// 50%ÓÃÀý
int main()
{
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll dx = x2 - x1;
    ll dy = y2 - y1;
    ll cx,cy;
    if(dy == 0) {
        cx = x1;
        cy = y1 + 1;
    } else if(dx == 0) {
        cx = x1 + 1;
        cy = y1;
    } else {
        if((dx * dx) + (dy * dy) % 2 == 0) {
            cx = x1 - dy;
            cy = y1 + dx;
        } else {
            cx = x1 - dy;
            cy = y1 + dx + 1;
        }
    }
    cout << cx << " " << cy << endl;
    return 0;
}