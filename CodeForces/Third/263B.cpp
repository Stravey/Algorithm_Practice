#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    if(k > n) {
        cout << -1 << endl;
        return 0;
    }
    sort(a.begin(),a.end());
    if(k == 0) {
        cout << a[n - 1] + 1 << "  " << a[n - 1] + 1 << endl;
    } else {
        int t = a[n - k];
        cout << t << " " << t << endl;
    }
    return 0;
}