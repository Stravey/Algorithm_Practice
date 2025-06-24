#include <iostream>
using namespace std;
int f[2005];
int n,m,p,q;
char opt;

// 并查集 find函数 模板
int find(int x) {
    while (x != f[x]) {
        f[x] = f[f[x]]; // 路径压缩
        x = f[x];
    }
    return x;
}

int main()
{
    cin >> n >> m;
    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }
    // 2倍是因为需要一个标记数组 用来标记敌人的敌人
    for(int i = 1;i <= 2 * n;i++) {
        f[i] = i;
    }
    for(int i = 1;i <= m;i++) {
        cin >> opt >> p >> q;
        if (p < 1 || p > n || q < 1 || q > n || p == q) {
            continue; 
        }
        // 找到 p 的族长   找到 q 的族长
        int rootP = find(p);
        int rootQ = find(q);
        if (opt == 'F') {
            f[rootP] = rootQ; // 合并朋友
        } else if (opt == 'E') {
            // 合并p的敌人与q的朋友
            int enemyP = find(p + n);
            f[enemyP] = rootQ;
            // 合并q的敌人与p的朋友
            int enemyQ = find(q + n);
            f[enemyQ] = rootP;
        }
    }
    int ans = 0;
    for(int i = 1;i <= n;i++) {
        if(i == f[i]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}