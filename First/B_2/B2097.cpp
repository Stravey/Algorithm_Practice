#include <iostream>
#include <algorithm>
using namespace std;

int n,a[101],k = -9999,cnt;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = 0;i < n;i++) {
        if(a[i + 1] == a[i]) {
            cnt++;
        } else {
            cnt = 1;
        }
        if(cnt > k) {
            k = cnt;
        }
    }
    cout << k << endl;
    return 0;
}