#include <iostream>
typedef long long ll;
using namespace std;

ll a,b,p,ans = 1,res = 0;

// ¿ìËÙÃÝÄ£°å
ll quickP(ll a,ll b,ll p) {
    while (b > 0) {
        if(b & 1) {
            ans = ans * a % p;
        }
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}

int main()
{
    cin >> a >> b >> p;
    res = quickP(a,b,p);
    cout << a << "^" << b << " mod " << p << "=" << res << endl;
    return 0;
}