#include <iostream>
#include <vector>
#define max_n 10005
using namespace std;

int n,x,y,t,ans = 0,len[max_n],vis[max_n];
vector<int> linker[max_n];

// dfs深度优先遍历
int dfs(int x) {
    if(vis[x]) {
        return vis[x];
    }

    for(int i = 0;i < linker[x].size();i++) {
        vis[x] = max(vis[x],dfs(linker[x][i]));        
    }

    vis[x] += len[x];
    return vis[x];
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> x >> len[i];
        // 以 0 结尾
        while(cin >> y) {
            if(!y) break;
            else linker[y].push_back(x);
        }
    }
    for(int i = 1;i <= n;i++) {
        ans = max(ans,dfs(i));
    }
    cout << ans << endl;
    return 0;
}