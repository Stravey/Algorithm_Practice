// Trie树变形 存数字
// 最大异或对 先查找再插入

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010, M = 31 * N;

int n;
int a[N];
int son[M][2], idx;

void insert(int x)
{
    int p = 0;
    for(int i = 30; i >= 0; i--) 
    {
        // 取x的第i位的二进制数
        int u = x >> i & 1;
        if(!son[p][u]) son[p][u] = ++idx;
        p = son[p][u];
    }
}

// 核心
int query(int x) 
{
    int p = 0, ans = 0;
    for(int i = 30; i >= 0; i--) 
    {
        int u = x >> i & 1;
        if(son[p][!u]) 
        {
            p = son[p][!u];
            ans = ans * 2 + !u;
        } 
        else 
        {
            p = son[p][u];
            ans = ans * 2 + u;
        }
    }
    return ans;
}

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    int ans = 0;
    
    for(int i = 0; i < n; i++) 
    {
        // 先插入再查询 可以避免 空集特判
        insert(a[i]);
        
        int t = query(a[i]);
        ans = max(ans, a[i] ^ t);
    }
    
    printf("%d\n", ans);
    
    return 0;
}



