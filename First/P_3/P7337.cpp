#include <iostream>
using namespace std;

int n,m,type,cnt = 0,a[105],b[105];

int main()
{
    cin >> n >> m >> type;
    for(int i = 1;i <= n ;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n ;i++) {
        cin >> b[i];
    }
    for(int i = 1;i <=n ;i++) {
        if(a[i] == b[i] && b[i] == 1) {
            cnt++;
        }
    }
    if(cnt > m) {  
        cout << m + n - cnt << endl;
    } else {
        cout << n << endl;
    }
    return 0;
}