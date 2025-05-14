#include <iostream>
#include <algorithm>
using namespace std;

int n,a[10005],x;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    //sort(a,a + n);
    for(int i = 0;i < n;i++) {
        if(a[i] == x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}