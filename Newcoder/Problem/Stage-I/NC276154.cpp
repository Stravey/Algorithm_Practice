#include <iostream>
using namespace std;

const int N = 1e5 + 10;

int a[N];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    int digit = 1;
    for(int i = 0; i < n; i++) {
        digit = (digit * (a[i] % 10)) % 10;
        if(digit == 6) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}