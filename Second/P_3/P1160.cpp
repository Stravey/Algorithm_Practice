#include <iostream>
#include <unordered_map>
using namespace std;

struct node {
    int prev,next,key;
    node (int _prev = 0,int _next = 0,int _key = 0) {
        prev = _prev;
        next = _next;
        key = _key;
    }
};
node a[100005];
int n,m,total = 0;
unordered_map<int,int> ans;

void ins_back(int x,int y) {
    int now = ans[x];
    a[++total] = node(now,a[now].next,y);
    a[a[now].next].prev = total;
    a[now].next = total;
    ans[y] = total;
}


void ins_front(int x,int y) {
    int now = ans[x];
    a[++total] = node(a[now].prev,now,y);
    a[a[now].prev].next = total;
    a[now].prev = total;
    ans[y] = total;
}

void del(int x) {
    if(!ans.count(x)) {
        return;
    }
    int now = ans[x];
    int left = a[now].prev,right = a[now].next;
    a[left].next = right;
    a[right].prev = left;
    ans.erase(x);
}


int main()
{
    int x,k,p,now;
    cin >> n;
    a[0] = node(0,0,0);
    ins_back(0,1);
    for(int i = 2;i <= n;i++) {
        cin >> k >> p;
        if(k < 1 || k > n) {
            return 1;
        }
        p ? ins_back(k,i) : ins_front(k,i);
    }
    cin >> m;
    for(int i = 1;i <= m;i++) {
        cin >> x;
        del(x);
    }
    now = a[0].next;
    while(now) {
        cout << a[now].key << " ";
        now = a[now].next;
    }
    return 0;
}