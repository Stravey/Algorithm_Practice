// 维护集合大小的并查集
#include <iostream>

using namespace std;

const int N = 100010;

// size[N] 记录第i个集合(连通块)中的个数 只考虑根结点的情况
int p[N], sz[N];

// 查找x结点的根结点 
// 路径压缩
int find(int x) 
{
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    
    // 初始化
    for(int i = 1; i <= n; i++) {
        p[i] = i;
        sz[i] = 1;
    }
    
    while(m --) 
    {
        char op[5];
        int a, b;
        scanf("%s", op);
        
        if(op[0] == 'C') 
        {   
            scanf("%d%d", &a, &b);
            if(find(a) == find(b)) continue;
            sz[find(b)] += sz[find(a)];
            p[find(a)] = find(b);
        }
        else if(op[1] == '1')
        {
            scanf("%d%d", &a, &b);
            if(find(a) == find(b)) puts("Yes");
            else puts("No");
        } 
        else 
        {
            scanf("%d", &a);
            printf("%d\n", sz[find(a)]);
        }
    }
    return 0;
}