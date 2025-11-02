#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 二分查找
int n,q;
struct set {
    int l; // 左端点
    int r; // 右端点
    int index; // 索引
};
int main()
{
    cin >> n >> q;
    vector<set> sets(n);
    for(int i = 0;i < n;i++) {
        cin >> sets[i].l >> sets[i].r;
        sets[i].index = i + 1;
    }
    sort(sets.begin(),sets.end(),[](const set& a,const set& b) {
        return a.l < b.l;
    });
    for(int i = 0;i < q;i++) {
        int x;
        cin >> x;
        int left = 0,right = n - 1,ans = -1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(sets[mid].l <= x) {
                if(x <= sets[mid].r) {
                    ans = sets[mid].index;
                    break;
                }
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}