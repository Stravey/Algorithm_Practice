#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend()); // from large to small
    cout << a[k - 1] << endl;
    return 0;
}