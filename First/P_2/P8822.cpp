#include <iostream>
using namespace std;
int n,v,m,a;
int ans = 0;

int main()
{
    cin >> n >> v >> m >> a;
    while(n) {
        for(int i = 1;i <= m && n != 0;i++,n--) {
            ans += v;
        }
        v += a;
    }
    cout << ans;
    return 0;
}