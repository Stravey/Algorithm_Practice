#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int a[10010],b[10010],n,sum = 0,m;

int main()
{
    cin >> n;
    memset(a,127,sizeof(a));
    memset(b,127,sizeof(b));
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    int i = 0,j = 0,k,w;
    for(k = 1;k < n;k++) {
        w = a[i] < b[j] ? a[i++] : b[j++];
        w += a[i] < b[j] ? a[i++] : b[j++];
        b[m++] = w;
        sum += w;
    }
    cout << sum << endl;
    return 0;
}