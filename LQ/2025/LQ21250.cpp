#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if(n & 1) {
            cout << min(n, k + 1) << endl;
        } else {
            cout << min(n / 2, k + 1) << endl;
        }
    }
    return 0;
}