// 求组合数III C a b mod p 的值
// n : 1 ~ 20
// a b : 1 ~ 10^18
// p : 1 ~ 100000
// 卢卡斯定理

#include <iostream>
#include <algorithm>

typedef long long LL;

using namespace std;

int p;

int qmi(int a, int b)
{
    int res = 1;
    while(b)
    {
        if(b & 1) res = (LL)res * a % p;
        a = (LL)a * a % p;
        b >>= 1;
    }
    return res;
}

int C(int a, int b)
{
    int res = 1;
    for(int i = 1, j = a; i <= b; i++, j--)
    {
        res = (LL)res * j % p;
        res = (LL)res * qmi(i, p - 2) % p;
    }
    return res;
}

int lucas(LL a, LL b)
{
    if(a <p && b < p) return C(a, b);
    return (LL)C(a % p, b % p) * lucas(a / p, b / p) % p;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        LL a, b;
        cin >> a >> b >> p;
        printf("%d\n", lucas(a, b));
    }
    return 0;
}
