// 朴素算法
// 就是每堆牌就是一个栈 移动一堆牌就是把一个栈的一块整体移到另一个栈顶

// 优化算法 
// 利用平衡二叉树的原理

#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int N = 300005;

struct Node
{
    int ls, rs;  // 左孩子、右孩子
    int val;
    int prior;
    int size;
}tree[N];

int root[N];  // root[i] = 第 i 堆的根
int belong[N];  // belong[x] = 哪一堆
int cnt;  // 结点计数器

// 获取子树大小
int getsize(int x)
{
    return x ? tree[x].size : 0;
}

// 更新子树
void update(int x)
{
    if(!x) return;
    tree[x].size = getsize(tree[x].ls) + getsize(tree[x].rs) + 1;
}

// 创建新结点
int newnode(int k)
{
    cnt++;
    tree[cnt].val = k;
    tree[cnt].prior = rand();
    tree[cnt].size = 1;
    tree[cnt].ls = tree[cnt].rs = 0;
    return cnt;
}

// 分裂
void split(int x, int k, int &l, int &r) {
    if (!x) {
        l = r = 0;
        return;
    }
    if (tree[x].val <= k) {
        l = x;
        split(tree[x].rs, k, tree[x].rs, r);
    } else {
        r = x;
        split(tree[x].ls, k, l, tree[x].ls);
    }
    update(x);
}

// 合并
int merge(int l, int r)
{
    if(!l || !r) return l + r;

    if(tree[l].prior > tree[r].prior)
    {
        tree[l].rs = merge(tree[l].rs, r);
        update(l);
        return l;
    } else {
        tree[r].ls = merge(l, tree[r].ls);
        update(r);
        return r;
    }
}

// 找到归属
void updateBelong(int x, int nb)
{
    if(!x) return;
    belong[tree[x].val] = nb;
    updateBelong(tree[x].ls, nb);
    updateBelong(tree[x].rs, nb);
}

int main()
{
    srand(2026); 
    int n, q;
    scanf("%d%d", &n, &q);

    for(int i = 1; i <= n; i++)
    {
        root[i] = newnode(i);
        belong[i] = i;
    }

    while(q--)
    {
        int c, p;
        scanf("%d%d", &c, &p);

        int y = belong[c];
        int t = belong[p];

        if(y == t) continue;

        int a, b, up, down;
        split(root[y], c - 1, a, b);
        split(b, c, up, down);

        up = merge(a, up);

        updateBelong(up, t);

        root[t] = merge(up, root[t]);
        root[y] = down;
    }

    vector<int> ans(n + 1, 0);
    for(int i = 1; i <= n; i++)
    {
        ans[belong[i]]++;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", ans[i]);
    }
    puts("");
    return 0;
}

