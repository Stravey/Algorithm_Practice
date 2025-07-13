#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k1,k2;
    cin >> n >> k1 >> k2;
    vector<int> a(n);
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i] >> x[i] >> y[i];
    }
    int max_q = -1;
    for(int i = 0;i < n;i++) {
        if(x[i] == 1 && y[i] == 1) {
            continue;
        }
        int cur = a[i];
        if(x[i] == 1) {
            cur -= k1;
        }
        if(y[i] == 1) {
            cur -= k2;
        }
        if(cur > 0 && cur > max_q) {
            max_q = cur;
        }
    } 
    cout << max_q << endl;
    return 0;
}
