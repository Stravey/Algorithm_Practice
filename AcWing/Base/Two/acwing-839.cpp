#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 100010;

// p下标
// h[N]存储堆中的值, h[1]是堆顶，x的左儿子是2x, 右儿子是2x + 1
// ph[k]存储第k个插入的点在堆中的位置
// hp[k]存储堆中下标是k的点是第几个插入的
int h[N], ph[N], hp[N], sz;

void heap_swap(int a, int b) 
{
    swap(ph[hp[a]],ph[hp[b]]);
    swap(hp[a], hp[b]);
    swap(h[a], h[b]);
}

void down(int u) 
{
    int t = u;
    if(2 * u <= sz && h[2 * u] < h[t]) t = u * 2;
    if(2 * u + 1 <= sz && h[2 * u + 1] < h[t]) t = u * 2 + 1;
    if(u != t) {
        heap_swap(u, t);
        down(t);
    }
}

void up(int u) 
{
    while(u / 2 && h[u / 2] > h[u]) 
    {
        heap_swap(u / 2, u);
        u >>= 1;
    }
}

int main()
{
    
    int n, m = 0;
    scanf("%d", &n);
    while(n--)
    {
        char op[10];
        int k, x;
        
        scanf("%s", op);
        
        if(!strcmp(op, "I")) {
            scanf("%d", &x);
            sz++;
            m++;
            ph[m] = sz;
            hp[sz] = m;
            h[sz] = x;
            up(sz);
        } 
        else if(!strcmp(op, "PM")) printf("%d\n", h[1]);
        else if(!strcmp(op, "DM")) 
        {
            heap_swap(1, sz);
            sz--;
            down(1);
        }
        else if(!strcmp(op, "D")) 
        {
            scanf("%d", &k);
            k = ph[k];
            heap_swap(k, sz);
            sz--;
            down(k);
            up(k);
        }
        else 
        {
            scanf("%d%d", &k, &x);
            k = ph[k];
            h[k] = x;
            down(k);
            up(k);
        }
            
    }
    
    return 0;
}