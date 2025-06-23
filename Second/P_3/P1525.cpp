#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct crime{
    int a,b,c;
}cs[100005];
int f[40005],n,m,ans = 0;

bool compare(crime c1,crime c2) {
    return c1.c > c2.c;
}

int find(int x) {
    if(x != f[x]) {
        f[x] = find(f[x]);
    }
    return f[x];
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0;i < m;i++) {
        scanf("%d%d%d",&cs[i].a,&cs[i].b,&cs[i].c);
    }
    for(int i = 1;i <= 2 * n;i++) {
        f[i] = i;
    }
    sort(cs,cs + m,compare);
    for(int i = 0;i < m;i++) {
        int a = cs[i].a;
        int b = cs[i].b;
        int c = cs[i].c;
        a = find(a);
        b = find(b);
        if(a == b) {
            ans = c;
            break;
        }
        f[a] = find(cs[i].b + n);
        f[b] = find(cs[i].a + n);
    }
    cout << ans << endl;
    return 0;
}