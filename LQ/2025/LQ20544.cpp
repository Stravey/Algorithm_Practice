#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1005;
int n, m, x, y, z;
int a[N], b[N], c[N], t[N];
int func() {
    t[0] = a[x], t[1] = b[y], t[2] = c[z];
    if(t[0] == t[1] && t[1] == t[2]) {
        return 200;
    } else if(t[0] + 1 == t[1] && t[1] + 1 == t[2]) {
        return 200;
    }
    sort(t, t + 3);
    if(t[0] == t[1] || t[1] == t[2]) {
        return 100;
    } else if(t[0] + 1 == t[1] && t[1] + 1 == t[2]) {
        return 100;
    }
    return 0;
}
int main()
{
    int ans = 0;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> b[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> c[i];
    }
    cin >> m;
    while(m--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        x = (x + x1) % n;
        y = (y + x2) % n;
        z = (z + x3) % n;
        ans += func();
    }
    cout << ans << endl;
    return 0;
}