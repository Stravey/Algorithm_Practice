#include <iostream>
#include <algorithm>
using namespace std;

int a[105];

int main()
{
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < x) {
            sum += a[i];
        } else {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}