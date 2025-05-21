#include <iostream>
#include <algorithm>
using namespace std;

const int max_n = 1000005;
long long n,a[max_n];
long long maxx = 0,minn = 1e18;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        maxx = max(maxx,a[i]);
        minn = min(minn,a[i]);
    }
    for(int i = 0;i < n;i++) {
        cout << maxx - a[i] << " ";
    }
    cout << "\n";
    for(int i = 0;i < n;i++) {
        cout << a[i] - minn << " ";
    }
    return 0;
}