#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define max_n 200005

struct node {
    int l,r,e;
}a[100005];
int f[max_n];

bool cmp(node n1,node n2) {
    return n1.e > n2.e;
}

int find(int x) {
    if(x != f[x]) {
        f[x] = find(f[x]);
    }
    return f[x];
}

void check() {
    int n,mark = 1;
    cin >> n;
    map<int,int> m;
    for(int i = 0;i < n;i++) {
        scanf("%d%d%d",&a[i].l,&a[i].r,&a[i].e);

        if (m.find(a[i].l) == m.end()) {
            m[a[i].l] = mark++;
        }
        if (m.find(a[i].r) == m.end()) {
            m[a[i].r] = mark++;
        }

    }
    sort(a,a + n,cmp);
    for(int i = 0;i < n;i++) {
        int l = m[a[i].l],r = m[a[i].r],t_l = find(l);
        if(a[i].e) {
            f[t_l] = find(r);
        } else {
            if(find(l) == find(r)) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0;i < t;i++) {
        for(int j = 0;j < max_n;j++) {
            f[j] = j;
        }
        check();
    }
    return 0;
}