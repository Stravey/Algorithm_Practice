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
    
    // ��ȡ��������
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        intervals.emplace_back(l, r);
    }
    
    // �������������
    sort(intervals.begin(), intervals.end());
    
    // �ϲ�����
    vector<pair<int, int>> merged;
    for (auto &interval : intervals) {
        if (merged.empty()) {
            merged.push_back(interval);
        } else {
            auto &last = merged.back();
            if (interval.first <= last.second + 1) {
                // �����ص������ڣ��ϲ�����
                last.second = max(last.second, interval.second);
            } else {
                // ���䲻�ص���ֱ�����
                merged.push_back(interval);
            }
        }
    }
    
    // �����ܳ���
    int cnt = 0;
    for (auto &interval : merged) {
        cnt += interval.second - interval.first + 1;
    }
    
    cout << cnt << endl;
    return 0;
}
