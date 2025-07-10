#include <iostream>
#include <algorithm>
using namespace std;

int n,b,tmp = 0,ans = 0,a[20005];

bool cmp(int left,int right) {
    return left > right;
}

int main()
{
    cin >> n >> b;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1,a + n + 1,cmp);
    while(tmp < b) {
        ans++;
        tmp += a[ans];
    }
    cout << ans << endl;
    return 0;
}