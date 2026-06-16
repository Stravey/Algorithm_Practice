#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;
int a[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int max_val = *max_element(a, a + n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == max_val) {
            cnt++;
        }
    }
    cout << n - cnt << endl;
    return 0;
}
