#include <iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = (k * l) / nl;
    int b = c * d;
    int e = p / np;
    int result = min(min(a,b),e);
    int ans = result / n;
    cout << ans << endl;
    return 0;
}