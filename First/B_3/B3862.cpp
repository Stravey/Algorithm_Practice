#include <iostream>
#include <cstring>
using namespace std;
const int N = 1005;
int n,m;
int g[N][N] = {0};
bool visited[N];
int ans;
void dfs(int x,int g[N][N]) {
    ans = max(ans,x);
    visited[x] = true;
    for(int i = 1;i <= n;i++) {
        if(g[x][i] == 1 && visited[i] == false) {
            dfs(i,g);
        }
    }
}
int main()
{
    cin >> n >> m;
    while(m--) {
        int a,b;
        cin >> a >> b;
        g[a][b] = 1;
    }
    for(int i = 1;i <= n;i++) {
        ans = 0;
        memset(visited,false,sizeof visited);
        dfs(i,g);
        cout << ans << " ";
    }
    return 0;
}