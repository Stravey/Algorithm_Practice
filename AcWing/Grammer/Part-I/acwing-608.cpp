#include <iostream>
#define int long long
using namespace std;

signed main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = a * b - c * d;
    if(ans < 0) {
        printf("DIFERENCA = ");
        printf("-");
        cout << c * d - a * b << endl;
    } else {
        cout << "DIFERENCA = " << ans << endl;
    }
    return 0;
}
