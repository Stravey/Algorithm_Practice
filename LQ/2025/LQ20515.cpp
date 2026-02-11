#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
const double pi2 = asin(1); // pi / 2
struct node
{
    double l, r;
}a[N];
bool cmp(node& a, node& b)
{
    return a.l < b.l;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        double x, y, r; cin >> x >> y >> r;
        double t1 = atan(y / x);
        double t2 = asin(r / sqrt(x * x + y * y));
        a[i] = {t1 - t2, t1 + t2};
    }
    // 合并区间
    sort(a + 1, a + 1 + n, cmp);
    double sum = 0, l = a[1].l, r = a[1].r;
    for(int i = 2; i <= n; i++) {
        if(a[i].l <= r) {
            r = max(r, a[i].r);
        } else {
            sum += r - l;
            l = a[i].l, r = a[i].r;
        }
    }
    sum += r - l;
    printf("%.3lf\n", 1.0 - sum / pi2);
    return 0;
}