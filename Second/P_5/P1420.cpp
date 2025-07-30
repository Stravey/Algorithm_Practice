#include <iostream>
using namespace std;

int main()
{
    int a[10005],n,ans = 0,max_n = -1000000;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        if(a[i + 1] - a[i] == 1) {
            ans++;
        } else {
            ans = 0;
        }
        if(ans > max_n) {
            max_n = ans;
        }
    }
    cout << max_n + 1 << endl;
    return 0;
}