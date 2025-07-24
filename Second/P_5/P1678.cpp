/* #include <iostream>
#include <algorithm>
using namespace std;

int m,n,a[100005],b[100005],ans = 0;

int find(int x) {
    int mid = (m - 1) / 2;
    int left = 0,right = m - 1;
    while(true) {
        mid = (left + right) / 2;
        if(a[mid] == x) {
            return 0;
        } else if(a[mid] < x && a[mid + 1] >= x) {
            return min(x - a[mid],a[mid + 1] - x);
        } else if(a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
}

int main()
{
    cin >> m >> n;
    for(int i = 0;i < m;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> b[i];
    }
    sort(a,a + m);
    for(int i = 0;i < n;i++) {
        if(a[0] >= b[i]) {
            ans += a[0] - b[i];
        } else if(a[m - 1] <= b[i]) {
            ans += b[i] - a[m - 1];
        } else {
            ans += find(b[i]);
        }
    }
    cout << ans << endl;
    return 0;
} */

// ÓÅ»¯°æ

#include <iostream>
#include <algorithm>
using namespace std;
int m,n,a[100005],b[100005],ans = 0,k;
int main() 
{
    cin >> m >> n;
    for(int i = 0;i < m;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> b[i];
    }
    sort(a,a + m);
    for(int i = 0;i < n;i++) {
        if(a[0] >= b[i]) {
            ans += a[0] - b[i];
        } else if(a[m - 1] <= b[i]) {
            ans += b[i] - a[m - 1];
        } else {
            k = lower_bound(a,a + m,b[i]) - a;
            ans += min(a[k] - b[i],b[i] - a[k - 1]);
        }
    }
    cout << ans << endl;
    return 0;
}