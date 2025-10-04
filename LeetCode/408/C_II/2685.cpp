#include <iostream>
#include <vector>
using namespace std;
class Solution {
    int g[100][100];
    bool visited[100];
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        for(int i = 0;i < edges.size();i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            g[u][v] = 1;
            g[v][u] = 1;
        }
        int ans = 0;
        for(int i = 0;i < n;i++) {
            if(!visited[i]) {
                int num_v = 0;
                int num_e = 0;
                dfs(i,n,num_v,num_e);
                if(num_e == num_v * (num_v - 1)) ans++;
            }
        }
        return ans;
    }

    void dfs(int x,int n,int &num_v,int &num_e) {
        if(visited[x]) {
            return;
        }
        visited[x] = true;
        num_v++;
        for(int i = 0;i < n;i++) {
            if(g[x][i]) {
                num_e++;
                dfs(i,n,num_v,num_e);
            }
        }
    }
};
int main()
{
    return 0;
}