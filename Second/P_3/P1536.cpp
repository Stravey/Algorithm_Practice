#include <iostream>
using namespace std;

// 并查集解决联通分量的题

int m,n,x,y;
int a[1005];

int find(int b) {
    if(b == a[b]) {
        return b;
    }
    return find(a[b]);
}

void join(int ans1,int ans2) {
    int c = find(ans1);
    int d = find(ans2);
    if(c != d) {
        a[c] = d;
    }
}

int main()
{
    while(true) {
        cin >> n;
        if(n == 0) {
            return 0;
        }
        for(int i = 1;i <= n;i++) {
            a[i] = i;
        }
        cin >> m;
        for(int i = 1;i <= m;i++) {
            cin >> x >> y;
            join(x,y);
        }
        int ans = 0;
        for(int i = 1;i <= n;i++) {
            if(find(i) == i) {
                ans++;
            }
        }
        cout << (ans - 1) << endl;
    }
    return 0;
}