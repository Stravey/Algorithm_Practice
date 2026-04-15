// 数组实现双链表
#include <iostream>
using namespace std;

const int N = 100010;

int m;
int head, e[N], l[N], r[N], idx;
int pos[N];  // 记录第i个插入的结点的下标

// 初始化
void init() {
    // 0表示左端点 1表示右端点
    r[0] = 1;
    l[1] = 0;
    idx = 2;
}

// 在下标为k的右边插入x
int add(int k, int x) {
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx;
    return idx++;
}
// 在下标为k的左边插入x
// 可调用 add(l[k], x);

// 删除第k结点
void remove(int k) {
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

int main()
{   
    ios::sync_with_stdio(false);  
    cin.tie(0);
    
    cin >> m;
    
    init();
    int cnt = 0;
    
    while(m --) {
        int k, x;
        char op;
        
        cin >> op;
        if(op == 'L') {
            cin >> x;
            cnt++;
            pos[cnt] = add(0, x);
        } else if(op == 'R') {
            cin >> x;
            cnt++;
            pos[cnt] = add(l[1], x);
        } else if(op == 'D') {
            cin >> k;
            remove(pos[k]);
        } else if(op == 'I') {
            char c;
            cin >> c;
            if(c == 'L') {
                cin >> k >> x;
                cnt++;
                pos[cnt] = add(l[pos[k]], x);  
            } else { 
                cin >> k >> x;
                cnt++;
                pos[cnt] = add(pos[k], x);  
            }       
        }
        
    }
    
    for(int i = r[0]; i != 1; i = r[i]) {
        cout << e[i] << ' ';
    }
    
    return 0;
}
