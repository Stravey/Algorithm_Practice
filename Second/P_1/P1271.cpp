#include <iostream>
#include <algorithm>
using namespace std;

int n,m,a[2000005];

int main()
{
    cin >> n >> m;
    for(int i = 0;i < m;i++) {
        cin >> a[i];
    }
    sort(a,a + m);
    for(int i = 0;i < m;i++) {
        cout << a[i] << " ";
    }
    return 0;
}