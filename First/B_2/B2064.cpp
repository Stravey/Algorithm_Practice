#include <iostream>
using namespace std;

int n,ans = 0,m,a[35];

int main()
{
    cin >> n;
    while(n--) {
        cin >> m;
        a[1] = a[2] = 1;
        for(int i = 3;i <= m;i++) {
            a[i] = a[i - 1] + a[i - 2];
        }
        cout << a[m] << endl; 
    }
    return 0;
}