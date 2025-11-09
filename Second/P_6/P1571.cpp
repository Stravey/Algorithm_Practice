#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Ã¶¾Ù + ¶þ·Ö
int a[100005],b[100005];
int n,m;
bool check(int x) {
    int l = 1,r = m;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if(b[mid] == a[x]) return 1;
        if(b[mid - 1] < a[x] && b[mid + 1] > a[x]) return 0;
        if(b[mid] > a[x]) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= m;i++) {
        cin >> b[i];
    }
    sort(b + 1,b + m + 1);
    for(int i = 1;i <= n;i++) {
        if(check(i)) {
            cout << a[i] << " "; 
        }
    }
    return 0;
}