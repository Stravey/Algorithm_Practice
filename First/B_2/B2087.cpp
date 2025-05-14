#include <iostream>
using namespace std;

int n,a[105],cnt = 0,m;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0;i < n;i++) {
        if(a[i] == m) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}