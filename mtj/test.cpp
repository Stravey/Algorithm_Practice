/* #include<bits/stdc++.h> 
using namespace std;
int main( )
{
    vector<int> v;
	int n,l,r,cnt = 0,tmp;
    cin >> n;
    for(int i = 1;i <= n;i++) {
		cin >> l >> r;
        for(int j = l;j <= r;j++) {
            v.push_back(j);
        }
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i++) {
        if(v[i] != v[i + 1]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> intervals;
    
    // 读取所有区间
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        intervals.emplace_back(l, r);
    }
    
    // 按区间起点排序
    sort(intervals.begin(), intervals.end());
    
    // 合并区间
    vector<pair<int, int>> merged;
    for (auto &interval : intervals) {
        if (merged.empty()) {
            merged.push_back(interval);
        } else {
            auto &last = merged.back();
            if (interval.first <= last.second + 1) {
                // 区间重叠或相邻，合并它们
                last.second = max(last.second, interval.second);
            } else {
                // 区间不重叠，直接添加
                merged.push_back(interval);
            }
        }
    }
    
    // 计算总长度
    int cnt = 0;
    for (auto &interval : merged) {
        cnt += interval.second - interval.first + 1;
    }
    
    cout << cnt << endl;
    return 0;
}
