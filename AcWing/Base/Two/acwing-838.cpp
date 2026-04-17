// 堆 Heap
// stl heap 可以实现的
// 1 插入一个数
// 2 求集合当中最小的值
// 3 删除最小值
// stl heap 不能实现的
// 4 删除任意一个元素
// 5 修改任意一个元素

// 小根堆
// 堆排序
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

int n, m;
int h[N], sz;

void down(int u) 
{
    int t = u;
    if(2 * u <= sz && h[2 * u] < h[t]) t = u * 2;
    if(2 * u + 1 <= sz && h[2 * u + 1] < h[t]) t = u * 2 + 1;
    if(u != t) {
        swap(h[u], h[t]);
        down(t);
    }
}

void up(int u) 
{
    while(u / 2 && h[u / 2] > h[u]) 
    {
        swap(h[u / 2], h[u]);
        u /= 2;
    }
}

int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%d", &h[i]);
    sz = n;
    
    // 建堆 O(n)
    for(int i = n / 2; i; i--) down(i);
    
    while(m--) { 
        printf("%d ", h[1]);
        h[1] = h[sz];
        sz--;
        down(1);
    }
    
    return 0;
}