#include <bits/stdc++.h>

using namespace std;

int a[10005],n,cnt = 0;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < i;j++) {
            if(a[j] > a[i]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}