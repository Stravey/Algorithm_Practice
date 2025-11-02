#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct interval { 
    int l;
    int r;
};
// 40%
/* int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int maxL = -1e9,minR = 1e9;
        vector<interval> intervals(n);
        for(int i = 0;i < n;i++) {
            cin >> intervals[i].l >> intervals[i].r;
            maxL = max(maxL,intervals[i].l);
            minR = min(minR,intervals[i].r);
        }
        if(maxL < minR) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
} */
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int maxL = -1e9,minR = 1e9;
        vector<interval> intervals(n);
        for(int i = 0;i < n;i++) {
            cin >> intervals[i].l >> intervals[i].r;
        }
        sort(intervals.begin(), intervals.end(), [](const interval& a, const interval& b) {
            return a.l < b.l;
        });
        bool flag = true;
        int maxR = intervals[0].r;
        for (int i = 1; i < n; i++) {
            if (intervals[i].l > maxR) {
                flag = false;
                break;
            }
            maxR = max(maxR, intervals[i].r);
        }
        cout << (flag ? "Yes" : "No") << "\n";
    }
    return 0;
}
