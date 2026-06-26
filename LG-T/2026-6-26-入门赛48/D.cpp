#include <iostream>
using namespace std;

const int N = 10005;

int a[N],b[N];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++) {
        if(a[i] == a[n - i + 1]) {
            b[i] = 1;
        }
        if(a[i] != a[n - i + 1]) {
            b[i] = 0;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << b[i] << ' ';
    }
    return 0;
}