// 一般哈希表 一般情况下 时间复杂度 O(1) 
// 1 开放寻址法  选取模的数为质数 且距离2的幂次方越远
// 2 拉链法 

// 拉链法实现
#include <iostream>
#include <cstring>

using namespace std;

const int N = 100003;

int h[N], e[N], ne[N], idx;

void insert(int x)
{
    // 映射下标 保证为正数
    int k = (x % N + N) % N;
    e[idx] = x;
    ne[idx] = h[k];
    h[k] = idx++;
}

bool find(int x)
{
    // 映射下标 保证为正数
    int k = (x % N + N) % N;
    for(int i = h[k]; i != -1; i = ne[i]) {
        if(e[i] == x) {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    memset(h, -1, sizeof h);
    
    while(n--) 
    {
        char op[2];
        int x;
        scanf("%s%d", op, &x);
        if(*op == 'I') insert(x);
        else 
        {
            if(find(x)) puts("Yes");
            else puts("No");
        }
    }
    
    return 0;
}

