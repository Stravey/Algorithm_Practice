#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

const int N = 3e5 + 5;

struct Node {
    ll min_val, sum;
    ll lazy;  // 懒标记，-1表示没有
};

class SegmentTree {
private:
    vector<Node> tree;
    int n;
    
    void build(int node, int l, int r, const vector<int>& a) {
        tree[node].lazy = -1;
        if (l == r) {
            tree[node].min_val = tree[node].sum = a[l];
            return;
        }
        int mid = (l + r) / 2;
        build(node * 2, l, mid, a);
        build(node * 2 + 1, mid + 1, r, a);
        push_up(node);
    }
    
    void push_up(int node) {
        tree[node].min_val = min(tree[node * 2].min_val, tree[node * 2 + 1].min_val);
        tree[node].sum = tree[node * 2].sum + tree[node * 2 + 1].sum;
    }
    
    void apply(int node, int l, int r, ll val) {
        tree[node].min_val = val;
        tree[node].sum = val * (r - l + 1);
        tree[node].lazy = val;
    }
    
    void push_down(int node, int l, int r) {
        if (tree[node].lazy != -1) {
            int mid = (l + r) / 2;
            apply(node * 2, l, mid, tree[node].lazy);
            apply(node * 2 + 1, mid + 1, r, tree[node].lazy);
            tree[node].lazy = -1;
        }
    }
    
public:
    SegmentTree(const vector<int>& a) {
        n = a.size() - 1;  // a是1-indexed的
        tree.resize(4 * n + 5);
        build(1, 1, n, a);
    }
    
    ll query_min(int node, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) {
            return tree[node].min_val;
        }
        push_down(node, l, r);
        int mid = (l + r) / 2;
        ll res = 1e18;
        if (ql <= mid) res = min(res, query_min(node * 2, l, mid, ql, qr));
        if (qr > mid) res = min(res, query_min(node * 2 + 1, mid + 1, r, ql, qr));
        return res;
    }
    
    void range_set(int node, int l, int r, int ql, int qr, ll val) {
        if (ql <= l && r <= qr) {
            apply(node, l, r, val);
            return;
        }
        push_down(node, l, r);
        int mid = (l + r) / 2;
        if (ql <= mid) range_set(node * 2, l, mid, ql, qr, val);
        if (qr > mid) range_set(node * 2 + 1, mid + 1, r, ql, qr, val);
        push_up(node);
    }
    
    ll query_sum() {
        return tree[1].sum;
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    SegmentTree seg(a);
    
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x;
            cin >> x;
            ll m = seg.query_min(1, 1, n, 1, x);
            seg.range_set(1, 1, n, 1, x, m);
        } else if (op == 2) {
            int y;
            cin >> y;
            ll m = seg.query_min(1, 1, n, y, n);
            seg.range_set(1, 1, n, y, n, m);
        } else {
            cout << seg.query_sum() << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}