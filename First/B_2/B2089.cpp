#include <iostream>
#include <algorithm>
using namespace std;

int n,a[105];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}