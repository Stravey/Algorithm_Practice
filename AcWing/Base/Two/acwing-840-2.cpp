// 一般哈希表 一般情况下 时间复杂度 O(1) 
// 1 开放寻址法  选取模的数为质数 且距离2的幂次方越远
// 2 拉链法 

// 开放寻址法实现
#include <iostream>
#include <cstring>

using namespace std;

const int N = 200003, null = 0x3f3f3f3f;

int h[N];

// 如果x在哈希表中已经存在 则返回它的位置
// 如果x不在哈希表中 返回它应该插入的位置
int find(int x)
{
    int k = (x % N + N) % N;
    
    while(h[k] != null && h[k] != x) 
    {
        k++;
        if(k == N) k = 0;
    }
    
    return k;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    // memset按字节初始化 相当于4个0x3f
    memset(h, 0x3f, sizeof h);
    
    while(n--) 
    {
        char op[2];
        int x;
        scanf("%s%d", op, &x);
        int k = find(x);
        if(*op == 'I') h[k] = x;
        else 
        {
            if(h[k] != null) puts("Yes");
            else puts("No");
        }
    }
    
    return 0;
}

