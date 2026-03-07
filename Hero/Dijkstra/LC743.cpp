#include <iostream>
#include <vector>
#include <cstring>
// LeetCode 743 使用迪杰斯特拉算法 单源最短路径 找到所有的最短路径的最大值 就是 最终的答案
// 定义图的顶点数 
#define max_n 101
// 定义边的类型
#define edgeType int
// 定义初始化默认的边的长度
#define inf INT_MAX

using namespace std;

class Solution {
    // 定义邻接矩阵
    edgeType graph[max_n][max_n];

    // 初始化邻接矩阵的所有边
    void initEdges(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                graph[i][j] = inf;
            }
        }
    }

    // 给图添加边
    void addEdge(int u, int v, edgeType w) {
        // 正常情况下 graph[u][v] = w 但 w 可能小于 graph[u][v]
        // graph[u][v] == inf 表示 u 到 v 这条边未初始化 
        if(graph[u][v] == inf || w < graph[u][v]) {
            graph[u][v] = w;
        }
    }

    // Dijkstra算法
    // n 顶点个数
    // s 起点
    // dist[max_n] 距离数组
    void dijkstra(int n, int s, edgeType dist[max_n]) {
        // 定义 visited 数组 表示该顶点是否被访问过
        bool visited[max_n] = {false};

        for(int i = 0; i < n;i ++) {
            dist[i] = inf;
        }
        
        // 刚开始 dist 数组 起点距离为 0
        dist[s] = 0;

        while(1) {
            // 最小距离
            edgeType minDist = inf;
            // 寻找最小值的那个顶点
            int minIndex;
            for(int i = 0; i < n; i++) {
                if(visited[i]) {
                    continue;
                }
                // 找到最小值的顶点 更新
                if(minDist == inf || minDist > dist[i]) {
                    minDist = dist[i]; 
                    minIndex = i;
                }
            }
            if(minDist == inf) {
                break;
            }
            visited[minIndex] = true;

            // 找到点后更新最小值距离
            for(int i = 0; i < n; i++) {
                // 被访问过
                if(visited[i]) {
                    continue;
                }
                // 无边
                if(graph[minIndex][i] == inf) {
                    continue;
                }
                // 起点到当前点的距离 + minIndex到下一顶点距离 小于 dist[i]则更新
                if(dist[i] == inf || graph[minIndex][i] + dist[minIndex] < dist[i]) {
                    dist[i] = graph[minIndex][i] + dist[minIndex];
                }
            }
        }
    }

public:
    // 网络延迟时间
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // 初始化图及边
        initEdges(n);
        for(int i = 0; i < times.size(); i++) {
            // 因为 dijkstra 是 0 开始的 所以这里要减 1
            int u = times[i][0] - 1;
            int v = times[i][1] - 1;
            edgeType w = times[i][2];
            addEdge(u, v, w);
        }
        edgeType dist[max_n];
        dijkstra(n, k - 1, dist);
        // 类似于线性枚举的过程 找最大值
        int maxx = 0;
        for(int i = 0; i < n; i++) {
            if(dist[i] == inf) {
                return -1;
            }
            if(maxx < dist[i]) {
                maxx = dist[i];
            }
        }
        return maxx;
    }
};

int main()
{
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        // solve();
    }
    return 0;
}