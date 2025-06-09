#include <iostream>
#include <algorithm>
using namespace std;

// 计数排序优化

struct contest {
    int l;
    int r;
}c[1000005];

bool cmp(contest a,contest b) {
    return a.r <= b.r;
}

int n,ans = 0,finish = 0;

int main()
{   
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> c[i].l >> c[i].r;
    }
    sort(c + 1,c + n + 1,cmp);
    for(int i = 1;i <= n;i++) {
        if(finish <= c[i].l) {
            ans++;
            finish = c[i].r;
        }
    }
    cout << ans << endl;
    return 0;
}