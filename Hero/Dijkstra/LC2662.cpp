#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
// 定义图的顶点数 
#define max_n 405
// 定义边的类型
#define edgeType int
// 定义初始化默认的边的长度
#define inf INT_MAX
#define base 100001
#define N 105

// 一维数组point
long long point[405];
int pointSize;

// 离散化 将二维离散的点放在一个一维数组中连续存放 并返回它对应的下标
int findPoint(int x, int y) {
    long long p = (long long)x * base + y;
    for(int i = 0; i < pointSize; i++) {
        if(p == point[i]) {
            return i;
        }
    }
    // 若没有找到 就插入到数组末尾
    point[pointSize++] = p;
    return pointSize - 1;
}

class Solution {
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
    int minimumCost(vector<int>& start, vector<int>& target, vector<vector<int>>& specialRoads) {
        pointSize = 0;
        initEdges(max_n);
        int s = findPoint(start[0], start[1]);
        int t = findPoint(target[0], target[1]);
        for(int i = 0; i < specialRoads.size(); i++) {
            int u = findPoint(specialRoads[i][0], specialRoads[i][1]);
            int v = findPoint(specialRoads[i][2], specialRoads[i][3]);
            edgeType w = specialRoads[i][4];
            addEdge(u, v, w);
        }
        for(int i = 0; i < pointSize; i++) {
            int x1 = point[i] / base;
            int y1 = point[i] % base;
            for(int j = 0; j < pointSize; j++) {
                int x2 = point[j] / base;
                int y2 = point[j] % base;
                int w = abs(x1 - x2) + abs (y1 - y2);
                addEdge(i, j, w);
            }
        }
        edgeType dist[max_n];
        dijkstra(pointSize, s, dist);
        return dist[t];
    }
};


/*
    dijkstra 算法 竞赛版
*/
int g[N][N];
int dist[N];
bool st[N];

int dijkstra() {
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;
    for(int i = 0; i < N - 1; i++) {
        int t = -1;
        for(int j = 1; j <= N; j++) {
            if(!st[j] && (t == -1 || dist[t] > dist[j])) {
                t = j;
            }
        }
        st[t] = true;
        for(int j = 1; j <= N; j++) {
            dist[j] = min(dist[j], dist[t] + g[t][j]);
        }
    }
    if(dist[N] == 0x3f3f3f3f) return -1;
    return dist[N];
}

int main()
{
    return 0;
}

