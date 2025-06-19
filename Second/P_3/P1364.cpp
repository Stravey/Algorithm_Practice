#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int n,sum = 10000000,visited[105];
struct node {
    int left;
    int right;
    int parent;
    int value;
}a[105];

int compute(int x,int d) {
    if(!x || visited[x]) {
        return 0;
    }
    visited[x] = 1;
    return compute(a[x].left,d + 1) + compute(a[x].right,d + 1) 
        + compute(a[x].parent,d + 1) + a[x].value * d;
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].value >> a[i].left >> a[i].right;
    }
    for(int i = 1;i <= n;i++) {
        a[a[i].left].parent = i;
        a[a[i].right].parent = i;
    }
    for(int i = 1;i <= n;i++) {
        memset(visited,0,sizeof(visited));
        sum = min(sum,compute(i,0));
    }
    cout << sum << endl;
    return 0;
}