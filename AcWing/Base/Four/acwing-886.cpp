// 求组合数II 使用逆元 将除法变乘法
// n : 1 ~ 10000
// a b : 1 ~ 100000

#include <iostream>

using namespace std;

typedef long long LL;
const int N = 100010, mod = 1e9 + 7;

// infac是fac的逆元
int fac[N], infac[N];

int qmi(int a, int k, int p)
{
    int res = 1;
    while(k)
    {
        if(k & 1) res = (LL)res * a % p;
        a = (LL) a * a % p;
        k >>= 1;
    }
    return res;
}


int main()
{
    fac[0] = infac[0] = 1;
    for(int i = 1; i < N; i++)
    {
        fac[i] = (LL)fac[i - 1] * i % mod;
        infac[i] = (LL)infac[i - 1] * qmi(i, mod - 2, mod) % mod;
    }
    
    int n;
    scanf("%d", &n);
    
    while(n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", (LL)fac[a] * infac[b] % mod * infac[a - b] % mod);
    }
    
    return 0;
}