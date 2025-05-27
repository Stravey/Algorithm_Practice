#include <bits/stdc++.h>

using namespace std;

int p[1000005],n,d;
long long cnt = 0;

// 适合小数据量 1e5
/* int main()
{
    cin >> n >> d;
    for(int i = 0;i < n;i++) {
        cin >> p[i];
    }
    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            if(abs(p[j] - p[i]) <= d) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
} */

int main()
{
    cin >> n >> d;
    vector<int> p(n);
    for(int i = 0;i < n;i++) {
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    int i = 0;
    for(int j = 0;j < n;j++) {
        while(p[j] - p[i] > d) {
            i++;
        }
        cnt += j - i;
    }
    cout << cnt << endl;
    return 0;
}