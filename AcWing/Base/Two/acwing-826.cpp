// 单链表 数组模拟 实现 邻接表 
#include <iostream>
using namespace std;

const int N = 100010;

// head 表示头结点
// e[i] 表示当前结点的值
// ne[i] 表示当前结点的下一个结点的位置
// idx 表示当前已经用到了哪个点
int head, e[N], ne[N], idx;

// 初始化
void init() {
    head = -1;
    idx = 0;
}

// 在头结点之后插入一个数
void add_to_head(int x) {
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}

// 在下标是k的结点的后面插入结点
void add(int k, int x) {
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}

// 将下标是k的结点的后面一个结点删除
void remove(int k) { 
    ne[k] = ne[ne[k]];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int m;
    cin >> m;
    
    init();
    
    while(m --) {
        int k, x;
        char op;
        
        cin >> op;
        if(op == 'H') {
            cin >> x;
            add_to_head(x);
        } else if(op == 'D') {
            cin >> k;
            if(!k) head = ne[head];
            remove(k - 1);
        } else {
            cin >> k >> x;
            add(k - 1, x);
        }
        
    }
    
    for(int i = head; i != -1; i = ne[i]) {
        cout << e[i] << " ";
    }
    
    return 0;
}