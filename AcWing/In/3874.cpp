// 2020年408统考真题 算法设计题
// 三指针算法 
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
const int N = 100005;
ll a[N],b[N],c[N];
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < m;i++) cin >> b[i];
    for(int i = 0;i < k;i++) cin >> c[i];
    
    int i = 0,j = 0,t = 0;
    ll ans = 1e18;

    while(i < n && j < m && t < k) {
        ll s1 = a[i];
        ll s2 = b[j];
        ll s3 = c[t];
        ans = min(ans,max(max(s1,s2),s3) - min(min(s1,s2),s3));
        if(s1 <= s2 && s1 <= s3) {
            i++;
        } else if(s2 <= s1 && s2 <= s3) {
            j++;
        } else {
            t++;
        }
    }
    cout << ans * 2 << endl;
    return 0;
}