#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int n,m;

void solve() 
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        q.push(i);
    }
    while(q.size() != 0) {
        for(int i = 1;i < m;i++) {
            // 将队首插入队尾
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        // 数到 m 的出队
        q.pop();
    }
}

int main()
{
    solve();
    return 0;
}