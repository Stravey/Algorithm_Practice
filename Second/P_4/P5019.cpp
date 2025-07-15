#include <iostream>
#include <algorithm>
using namespace std;

int n,a[100005],ans = 0;

int main() 
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        if(a[i] > a[i - 1]) {
            ans += (a[i] - a[i - 1]);
        }
    }
    cout << ans << endl;
    return 0;
}
