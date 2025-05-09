#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int T;
int a,p;

int main()
{
    cin >> T;
    while(T--) 
    {
        cin >> a >> p;
        if(p < 16) {
            a = a -= 10;
        }
        if(p > 20) {
            a -= (p - 20);
        }
        if(a <= 0) {
            cout << 0 << endl;
        } else {
            cout << a << endl;
        }
    }
    return 0;
}