// 快速幂
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
        int a, b, p;
        scanf("%lld%lld%lld", &a, &b, &p);
        printf("%lld\n", qmi(a, b, p));
    }
    return 0;
}