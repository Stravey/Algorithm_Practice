#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        while(k--) {
            int na = (b + c) / 2;
            int nb = (a + c) / 2;
            int nc = (a + b) / 2;
            a = na, b = nb, c = nc;
            if(a == b && a == c) {
                break;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}