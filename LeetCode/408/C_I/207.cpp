#include <iostream>
#include <vector>
using namespace std;
// 数组模拟队列
class Solution {
    int g[2005][2005];
    int q[2005];
    int in_degree[2005];
    int front = 0;
    int rear = 0;
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // 统计入度
        for(int i = 0;i < prerequisites.size();i++) {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];
            g[b][a] = 1;
            in_degree[a]++;
        }
        // 寻找入度为0的点 将其加入队列
        for(int i = 0;i < numCourses;i++) {
            if(in_degree[i] == 0) {
                q[rear++] = i;
            }
        }
        // 拓扑排序
        while(front < rear) {
            int tmp = q[front++];
            for(int i = 0;i < numCourses;i++) {
                if(g[tmp][i] == 1) {
                    in_degree[i]--;
                    if(in_degree[i] == 0) {
                        q[rear++] = i;
                    }
                }
            }
        }
        // 一次遍历 看还有入度为0的点
        for(int i = 0;i < numCourses;i++) {
            if(in_degree[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}