#include <iostream>
using namespace std;

// 二叉树的深度 P4913

int n;
struct node {
    int left;
    int right;
}a[1000005];

void build() {
    for(int i = 1;i <= n;i++) {
        cin >> a[i].left >> a[i].right;
    }
}

int dfs(int x) {
    if(!x) {
        return 0;
    }
    return max(dfs(a[x].left),dfs(a[x].right)) + 1;
}

int main()
{
    cin >> n;
    build();
    cout << dfs(1) << endl;
    return 0;
}