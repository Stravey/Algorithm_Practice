#include <iostream>
#include <queue>
using namespace std;

struct node {
    int floor;
    int d;
};
queue<node> q;
int n,a,b;
int k[1000],visited[1000];

int main()
{
    cin >> n >> a >> b;
    for(int i = 1;i <= n;i++) {
        cin >> k[i];
    }
    q.push((node){a,0});
    visited[a] = 1;
    node now;
    while(!q.empty()) {
        now = q.front();
        q.pop();
        if(now.floor == b) {
            break;
        }
        // -1表示向下 1表示向上
        for(int flag = -1;flag <= 1;flag += 2) {
            int dist = now.floor + k[now.floor] * flag;
            if(dist >= 1 && dist <= n && visited[dist] == 0) {
                q.push((node){dist,now.d + 1});
                visited[dist] = 1;
            }
        }
    }
    if(now.floor == b) {
        cout << now.d << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}