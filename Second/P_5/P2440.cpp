#include <iostream>
#include <algorithm>
using namespace std;

long long n,k,a[100005];

/* int main()
{
    long long l = 0,r = 100000000;
    cin >> n >> k;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    while(l <= r && r != 0) {
        long long mid = l + (r - l) / 2,tmp = 0;
        for(int i = 0;i < n;i++) {
            tmp += a[i] / mid;
        }
        if(tmp >= k) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << r << endl;
    return 0;
} */


// ÓÅ»¯Ëã·¨
int main() 
{
    long long l = 0,r = 0;
    cin >> n >> k;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        if(r < a[i]) {
            r = a[i];
        }
    }
    sort(a,a + n);
    while(l <= r && r != 0) {
        long long mid = l + (r - l) / 2,tmp = 0;
        for(int i = 0;i < n;i++) {
            tmp += a[i] / mid;
        }
        if(tmp >= k) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << r << endl;
    return 0;
}
