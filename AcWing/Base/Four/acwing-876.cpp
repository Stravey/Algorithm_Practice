// 快速幂求逆元
#include <iostream>
#include <algorithm>
#define int long long 

using namespace std;

int qmi(int a, int b, int mod)
{
    int res = 1;
    while(b)
    {
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}


signed main()
{
    int n;
    scanf("%lld", &n);
    while(n--)
    {
        int a, p;
        scanf("%lld%lld", &a, &p);
        int res = qmi(a, p - 2, p);
        if(a % p) printf("%lld\n", res);
        else puts("impossible");
    }
    return 0;
}