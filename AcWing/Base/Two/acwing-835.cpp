// Trie 高效存储和查找字符串集合的数据结构
#include <iostream>

using namespace std;

const int N = 100010;

// son[N][26] 表示每一个结点的孩子结点个数 最大为26
// cnt[N] 表示以 p 为结尾的字符串个数
// idx 表示当前使用到哪个下标
// 注意!! 下标为0的点为根节点 当没有孩子结点时也为0
int son[N][26], cnt[N], idx;
char str[N];

// 插入
void insert(char str[]) 
{
    int p = 0;
    for(int i = 0; str[i]; i++) {
        // 将下一个结点映射为0~25的数字
        int u = str[i] - 'a';
        // 没在trie树中 则++
        if(!son[p][u]) {
            son[p][u] = ++idx;
        }
        // 继续循环插入
        p = son[p][u];
    }
    
    cnt[p]++;
}

// 查询
int query(char str[]) 
{
    int p = 0;
    for(int i = 0; str[i]; i++) {
        // 将下一个结点映射为0~25的数字
        int u = str[i] - 'a';
        // 没在trie树中 则直接返回 未找到
        if(!son[p][u]) {
            return 0;
        }
        // 继续循环查询
        p = son[p][u];
    }
    return cnt[p];
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n --) {
        char op[2];
        scanf("%s%s", op, str);
        if(op[0] == 'I') {
            insert(str);
        } else {
            printf("%d\n", query(str));
        }
    }
    
    return 0;
}
