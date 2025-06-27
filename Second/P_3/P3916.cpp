#include <iostream>
#include <vector>
#define max_n 100005
using namespace std;

int n,m;
vector<int> v[max_n];
int a[max_n];

void dfs(int x,int y) {
    a[x] = y;
    for(int i = 0;i < v[x].size();i++) {
        if(a[v[x][i]] == 0) {
            dfs(v[x][i],y);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= m;i++) {
        int x,y;
        cin >> x >> y;
        v[y].push_back(x);
    }
    for(int i = n;i >= 0;i--) {
        if(a[i] == 0) {
            dfs(i,i);
        }
    }
    for(int i = 1;i <= n;i++) {
        cout << a[i] << " "; 
    }
    return 0;
}