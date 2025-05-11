#include <iostream>
using namespace std;

int main()
{
    int n,x,y,z;
    int tmp = 0,ans = 0,cnt = 0,sum = 0;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> x >> y >> z;
        tmp += x;
        ans += y;
        cnt += z;
        sum = tmp + ans + cnt;
    }
    cout << tmp << " " << ans << " " << cnt << " " << sum;
    return 0;
}