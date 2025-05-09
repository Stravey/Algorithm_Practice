#include <iostream>
#include <algorithm>
#define N 100000005
using namespace std;

long long n,a[N];

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 2;i < n;i++) {
        if(a[i] < a[i - 1] + a[i - 2]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}