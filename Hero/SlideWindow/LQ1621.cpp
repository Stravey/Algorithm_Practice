#include <iostream>
using namespace std;
// 当数组中的元素大于 m 时 标记为 1 其余标记为 0 则原数组变为一个 0 1 数组串
int slideWindow(int* a, int n, int k) {
    int i = 0, j = -1;
    int sum = 0;
    int ans = 0;
    while(j++ < n - 1) {
        sum += a[j];
        while(sum >= k) {
            ans += n - j;
            sum -= a[i];
            i++;
        }
    }
    return ans;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[2005];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = (a[i] >= m ? 1 : 0);
    }
    int ans = slideWindow(a, n, k);
    cout << ans << endl;
    return 0;
}