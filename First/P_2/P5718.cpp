#include <iostream>
#include <algorithm>
using namespace std;

int a[10000];

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    cout << a[0] << endl;
    return 0;
}