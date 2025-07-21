#include <iostream>
#include <algorithm>
using namespace std;

// 思路：
// 1.先从0找最大值
// 2.再从最大值到剩下中的最小值
// 3.再从最小值到剩下中的最大值
// 4.重复2 3步骤知道访问完所有石头

int main()
{
    long long n,a[305],ans = 0,l,r,mark = 1,tmp = 0;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    l = 0;
    r = n - 1;
    mark = 1;
    while(l <= r) {
        if(mark == 1) {
            ans += (a[r] - tmp) * (a[r] - tmp);
            tmp = a[r];
            r--;
        } else {
            ans += (a[l] - tmp) * (a[l] - tmp);
            tmp = a[l];
            l++;
        }
        mark = 1 - mark;
    }
    cout << ans << endl;
    return 0;
}