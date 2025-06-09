#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct coin {
    int m;  // 质量
    int v;  // 价值
}a[110];

bool cmp(coin x,coin y) {
    return x.v * y.m > y.v * x.m;
}

int main()
{
    int n,t,c,i;
    float ans = 0;
    cin >> n >> t;
    c = t; // 剩余容量
    for(i = 0;i < n;i++) {
        cin >> a[i].m >> a[i].v;
    }
    sort(a,a + n,cmp);
    for(i = 0;i < n;i++) {
        if(a[i].m > c) {
            break;
        }
        c -= a[i].m;
        ans += a[i].v;
    }
    if(i < n) {
        ans += 1.0 * c / a[i].m * a[i].v;
    }
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}