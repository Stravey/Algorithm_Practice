// 字符串哈希  快速比较两个字符串是否相等可以使用该方法
// 字符串前缀哈希法
// P的取值131 13331

#include <iostream>

using namespace std;

typedef unsigned long long ULL;

const int N = 100010, P = 131;

int n, m;
char str[N];
ULL h[N], p[N];

ULL get(int x, int y) 
{
    return h[y] - h[x - 1] * p[y - x + 1];
}

int main()
{
    scanf("%d%d%s", &n, &m, str + 1);
    
    p[0] = 1;
    for(int i = 1; i <= n; i++) 
    {
        p[i] = p[i - 1] * P;
        h[i] = h[i - 1] * P + str[i];
    }
    
    while(m--)
    {
        int l1, r1, l2, r2;
        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
        
        if(get(l1, r1) == get(l2, r2)) puts("Yes");
        else puts("No");
    }
    
    return 0;
}


