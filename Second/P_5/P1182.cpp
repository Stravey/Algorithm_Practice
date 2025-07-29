#include <iostream>
using namespace std;
// ¶þ·Ö
int main()
{
    int n,m,a[100005],left = 0,right = 0;
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        if(left < a[i]) {
            left = a[i];
        }
        right += a[i];
    }
    while(left <= right) {
        int mid = (left + right) / 2,tmp = 0,cnt = 1;
        for(int i = 0;i < n;i++) {
            if(a[i] + tmp <= mid) {
                tmp += a[i];
            } else {
                tmp = a[i];
                cnt++;
            }
        }
        if(cnt <= m) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << left << endl;
    return 0;
}