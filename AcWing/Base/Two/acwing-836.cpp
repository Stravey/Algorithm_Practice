// 朴素并查集 每个集合用一棵树来表示 树根的编号是整个集合的编号 每个结点存储其父结点
// 1 将两个集合合并
// 2 判断/查询两个元素是否在一个集合中

// 时间复杂度约等于 O(1)
#include <iostream>

using namespace std;

const int N = 100010;

int p[N];

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
    }
    
    while(m --) 
    {
        char op[2];
        int a, b;
        // 注意scanf的输出字符时 使用 %c 会有随机的空格读入 所以使用 %s 更好
        scanf("%s%d%d", op, &a, &b);
        
        if(op[0] == 'M') p[find(a)] = find(b);
        else 
        {
            if(find(a) == find(b)) puts("Yes");
            else puts("No");
        }
    }
    return 0;
}