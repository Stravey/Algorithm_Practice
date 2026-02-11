#include <iostream>
using namespace std;
// 向上递归 向下寻找节点颜色
bool dfs(int n, int k) {
    if(n == 1) {
        return true;
    }
    bool p = dfs(n - 1, (k + 1) / 2);
    if(k & 1) {
        return p;
    } else {
        return !p;
    }
}
int main()
{
    int m;
    cin >> m;
    for(int i = 0;i < m;i++) {
        int n, k;
        cin >> n >> k;
        if(dfs(n, k)) {
            cout << "RED\n";
        } else {
            cout << "BLACK\n";
        }
    }
    return 0;
}