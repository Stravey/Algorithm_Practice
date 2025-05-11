#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int a[105];
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    cout << a[n - 1];
    return 0;
}