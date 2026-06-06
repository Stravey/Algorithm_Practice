#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 5;
long long a[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    long long last = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= x) {
            cnt++;
            last = a[i];
        } else {
            break;
        }
    }
    cout << cnt << " " << x - last << endl;
    return 0;
}