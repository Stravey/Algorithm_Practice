// 朴素 Dijkstra 算法
// 最短路问题 不能有负权边
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 510;

int n, m;
int g[N][N];
int dist[N];
bool st[N];

int dijkstra()
{
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    
    for(int i = 0; i < n; i++)
    {
        int t = -1;
        for(int j = 1; j <= n; j++)
        {
            if(!st[j] && (t == -1 || dist[t] > dist[j]))
            {
                t = j;
            }
        }
        st[t] = true;
        
        for(int j = 1; j <= n; j++)
        {
            dist[j] = min(dist[j], dist[t] + g[t][j]);
        }
    }
    
    if(dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}

int main()
{
    scanf("%d%d", &n, &m);
    
    memset(g, 0x3f, sizeof g);
    
    while(m--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        // 若有自环或重边 需要以下代码 此题有这个题设
        g[x][y] = min(g[x][y], z);
    }
    
    int ans = dijkstra();
    
    printf("%d\n", ans);
    
    return 0;
}
