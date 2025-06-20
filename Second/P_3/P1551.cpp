#include <iostream>
using namespace std;

// 并查集解决家族亲戚问题 (最基础的并查集问题)

int n,m,p,x,y;
int set[5005];

int find(int x) {
    if(x == set[x]) {
        return x;
    }
    return find(set[x]);
}

void join(int c,int d) {
    int ans1 = find(c);
    int ans2 = find(d);
    if(ans1 != ans2) {
        set[ans1] = ans2;
    }
}

int main() 
{
    cin >> n >> m >> p;
    for(int i = 1;i <= n;i++) {
        set[i] = i;
    }
    for(int i = 1;i <= m;i++) {
        cin >> x >> y;
        join(x,y);
    }
    for(int i = 1;i <= p;i++) {
        cin >> x >> y;
        if(find(x) == find(y)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}