// 求组合数I 公式法 递推
// n : 1 ~ 10000
// a b : 1 ~ 2000
#include <iostream>

using namespace std;

const int N = 2010, mod = 1e9 + 7;

int c[N][N];

void init()
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(!j) c[i][j] = 1;
            else c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
        }
    }
}

int main()
{
    init();
    
    int n;
    scanf("%d", &n);
    
    while(n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", c[a][b]);
    }
    
    return 0;
}