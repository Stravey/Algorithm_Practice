#include <iostream>
#include <vector>
using namespace std;
class Solution {
    int g[105][105];
    int color[105];
    bool flag = true;
    int n;
public:
    bool isBipartite(vector<vector<int>>& graph) {
        n = graph.size();
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < graph[i].size();j++) {
                int x = graph[i][j];
                g[i][x] = 1;
            }
        }
        for(int i = 0;i < n;i++) {
            if(!color[i]) {
                dfs(i,1);
            } else {
                dfs(i,color[i]);
            }
        }
        return flag;
    }
    void dfs(int x,int c)  {
        color[x] = c;
        for(int i = 0;i < n;i++) {
            if(g[x][i] == 1 && !color[i]) {
                dfs(i,3 - c);
            } else if(g[x][i] == 1 && color[i]) {
                if(c == color[i]) {
                    flag = false;
                }
            }
        }
    }
};
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}