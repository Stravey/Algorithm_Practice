#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define max_n 5005
#define max_m 500005
#define mod 80112002
using namespace std;

// DAG
int n,m,x,y,ans = 0;
int in_d[max_n],out_d[max_n],f[max_n];
vector<int> p[max_n];
queue<int> q;

int main() 
{
    cin >> n >> m;
    for(int i = 1;i <= m;i++) {
        cin >> x >> y;
        out_d[x]++;
        in_d[y]++;
        p[x].push_back(y);
    }
    memset(f,0,sizeof(f));
    for(int i = 1;i <= n;i++) {
        if(in_d[i] == 0) {
            q.push(i);
            f[i] = 1;
        }
    }
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for(int i = 0;i < p[x].size();i++) {
            int y = p[x][i];
            f[y] = (f[x] + f[y]) % mod;
            in_d[y]--;
            if(in_d[y] == 0) {
                q.push(y);
            }
        }
    }
    for(int i = 1;i <= n;i++) {
        if(out_d[i] == 0) {
            ans = (ans + f[i]) % mod;
        }
    }
    cout << ans << endl;
    return 0; 
}