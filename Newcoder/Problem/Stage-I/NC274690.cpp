#include <iostream>
#define int long long
using namespace std;

signed main()
{
    int a, b;
    cin >> a >> b;
    // 吃冰的个数
    int need = 2 * b;
    int ans = 0;
    if(a < need) {
        int hot = a / 2;
        ans = a + hot;
    } else {
        ans = 3 * b;
    }
    cout << ans << endl;
    return 0;
}