#include <bits/stdc++.h>
using namespace std;
// 50%ÓÃÀı
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    unordered_set<int> x_set;
    unordered_set<int> y_set;
    for(int i = 1;i <= n;i++) {
        int x,y;
        cin >> x >> y;
        if(x == 0 && y == 0) {
            x_set.insert(x);
        } else if(y == 0) {
            x_set.insert(x);
        } else if(x == 0) {
            y_set.insert(y);
        }
    }
    for(int x : x_set) {
        if(x < x + 1 && x_set.count(x + 1)) {
            cnt++;
        }
    }
    for(int y : y_set) {
        if(y < y + 1 && y_set.count(y + 1)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}