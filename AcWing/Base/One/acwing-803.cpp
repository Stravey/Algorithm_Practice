// 区间合并 类型题目 思路
// 模拟 + 贪心
// 1 按区间左端点排序
// 2 扫描整个区间 进行区间合并 (3种情况)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int > PII;

const int N = 100010;

int n;
vector<PII> segs;

void merge(vector<PII> &segs) {
    vector<PII> res;
    
    // C++中pair会默认根据左端点排序 再进行右端点排序
    sort(segs.begin(), segs.end());
    
    // 负无穷 正无穷
    int st = -2e9, ed = -2e9;
    
    for(auto seg : segs) {
        // 无交集
        if(ed < seg.first) {
            if(st != -2e9) {
                res.push_back({st, ed});
            }
            st = seg.first;
            ed = seg.second;
        } else {
            ed = max(ed, seg.second);
        }
    }
    
    if(st != -2e9) {
        res.push_back({st, ed});
    }
    
    segs = res;
}

signed main()
{
    cin >> n;
    
    for(int i = 0 ; i < n ;i ++) {
        int l, r;
        cin >> l >> r;
        segs.push_back({l, r});
    }
    
    merge(segs);
    
    cout << segs.size() << endl;
    
    return 0;
}

