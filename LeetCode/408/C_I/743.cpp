#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

/// 单源最短路径算法 朴素Dijkstra算法
class Solution {
    // 图邻接矩阵定义
    int g[110][110];
    // 判断图是否被访问过
    bool visited[110];
    // 记录距离
    int dist[110];
public:
    void Dijkstra(int n,int k) {
        dist[k] = 0;
        for(int i = 1;i <= n;i++) {
            int t = -1; // 当前如果有更小的顶点 就用它本身
            for(int j = 1;j <= n;j++) {
                if(visited[j] == false && (t == -1 || dist[j] < dist[t])) {
                    t = j;
                }
            }
            visited[t] = true;
            for(int j = 1;j <= n;j++) {
                if(dist[j] > dist[t] + g[t][j]) {
                    dist[j] = dist[t] + g[t][j];
                }
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // 初始化 g 邻接矩阵
        memset(g,0x3f,sizeof g);
        // 初始化 visited 数组 
        memset(visited,false,sizeof visited);
        // 初始化 dist 数组 
        memset(dist,0x3f,sizeof dist);

        int m = times.size();
        for(int i = 0;i < m;i++) {
            int a = times[i][0];
            int b = times[i][1];
            int c = times[i][2];
            g[a][b] = c;
        }
        // 执行单源最短路径算法
        Dijkstra(n,k);

        int ans = -1;
        for(int i = 1;i <= n;i++) {
            if(dist[i] == 0x3f3f3f3f) {
                return -1;
            } else {
                // 更新最大值
                ans = max(ans,dist[i]);
            }
        }
        return ans;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}