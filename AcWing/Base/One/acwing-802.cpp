#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
// 离散化算法 模板
using namespace std;

typedef pair<int, int> PII;

const int N = 300010;

int n, m;
int a[N], s[N];
vector<int> alls;
vector<PII> add, query;

int find(int x) {
    int l = 0, r = alls.size() - 1;
    while(l < r) {
        int mid = l + r >> 1;
        if(alls[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return r + 1;  
}

vector<int>::iterator unique(vector<int> &a) {
    int j = 0;
    for(int i = 1; i <= a.size(); i++) {
        if(i == 0 || a[i] != a[i - 1]) {
            a[j++] = a[i];
        }
    }
    return a.begin() + j;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});
        
        alls.push_back(x);
    }
    
    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        
        alls.push_back(l);
        alls.push_back(r);
    }
    
    // 去重
    sort(alls.begin(), alls.end());
    // 自己实现unique函数
    alls.erase(unique(alls), alls.end());
    // C++自带unique函数
    // alls.erase(unique(alls.begin(), alls.end()), alls.end());
    
    // 处理插入
    for(auto item : add) {
        int x = find(item.first);
        a[x] += item.second;
    }
    
    // 前缀和
    for(int i = 1; i <= alls.size(); i++) {
        s[i] = s[i - 1] + a[i];
    }
    
    // 处理查询
    for(auto item : query) {
        int l = find(item.first);
        int r = find(item.second);
        cout << s[r] - s[l - 1] << endl;
    }
    
    return 0;
}