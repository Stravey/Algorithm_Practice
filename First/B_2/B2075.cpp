#include <iostream>
#include <iomanip>
using namespace std;

int a,b,ans = 1;

int main()
{
    cin >> a >> b;
    a %= 1000;
    while(b > 0) {
        if(b % 2 == 1) {
            ans = (ans * a) % 1000;
        }
        a = (a * a) % 1000;
        b /= 2;
    }
    cout << setfill('0') << setw(3) << ans << endl;
    return 0;
}