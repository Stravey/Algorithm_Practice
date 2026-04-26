// 线性同余方程
// 如果a和m的最大公约数是b的倍数 就一定有解
#include <iostream>

using namespace std;

// 扩展欧几里得算法 递归
int exgcd(int a, int b, int &x, int &y)
{
    if(!b)
    {
        x = 1, y = 0;
        return a;
    }
    
    int d = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    while(n--)
    {
        int a, b, m;
        scanf("%d%d%d", &a, &b, &m);
        int x, y;
        int d = exgcd(a, m, x, y);
        if(b % d) puts("impossible");
        else 
        {
            printf("%d\n", (long long)x * (b / d) % m);
        }
        
    }
    return 0;
}