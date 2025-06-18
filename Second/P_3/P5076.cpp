#include <iostream>
#define max_n 100010
using namespace std;
int q,op,x,root,cnt;
struct node {
    int left;
    int right;
    int size;
    int value;
    int num;
    node(int l = 0,int r = 0,int s = 1,int v = 0)
        : left(l),right(r),size(s),value(v) {}
}t[max_n];
// ���½����Ϣ
inline void update(int root) {
    t[root].size = t[t[root].left].size + t[t[root].right].size + 1;
}
// ����
int rank_r(int x,int root) {
    if(!root) {
        return 0;
    }
    if(x <= t[root].value) {
        return rank_r(x,t[root].left);
    } else {
        return t[t[root].left].size + 1 + rank_r(x,t[root].right);
    }
}
// ��ѯ����Ϊx����
int search(int x,int root) {
    if(!root) {
        return -1;
    }
    if(x <= t[t[root].left].size) {
        return search(x,t[root].left);
    } else if(x == t[t[root].left].size + 1) {
        return t[root].value;
    } else { 
        return search(x - t[t[root].left].size - 1,t[root].right);
    }
}
// ����x
void insert(int x,int & root) {
    if (root == 0) {
        root = ++cnt;
        t[root] = node(0, 0, 1, x);
        return;
    }
    if (x < t[root].value) {
        insert(x, t[root].left);
    }
    else if (x > t[root].value) {
        insert(x, t[root].right);
    }
    update(root);
}
// ��ǰ��
int predecessor(int x,int root) {
    if(!root) {
        return -2147483647;
    }
    if(x <= t[root].value) {
        return predecessor(x,t[root].left);
    } else {
        return max(t[root].value,predecessor(x,t[root].right));
    }
}
// �Һ��
int successor(int x,int root) {
    if(!root) {
        return 2147483647;
    }
    if(x >= t[root].value) {
        return successor(x,t[root].right);
    } else {
        return min(t[root].value,successor(x,t[root].left));
    }
}

int main() 
{
    cin >> q;
    cnt = root = 0;
    while(q--) {
        cin >> op >> x;
        if(op == 1) {
            cout << rank_r(x,root) << endl;
        } else if(op == 2) {
            cout << search(x,root) << endl;
        } else if(op == 3) {
            cout << predecessor(x,root) << endl;
        } else if(op == 4) {
            cout << successor(x,root) << endl;
        } else if(op == 5) {
            insert(x,root);
        }
    }
    return 0;
}