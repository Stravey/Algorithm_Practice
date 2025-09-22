#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,k,cnt = 0;
    cin >> n >> k;
    if(k < 1 || k > n) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int limit = a[k - 1];
    for(int x : a) {
        if(x >= limit && x > 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}