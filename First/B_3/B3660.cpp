#include <iostream>
#include <cmath>
using namespace std;

int T,n,x;

int main()
{
    cin >> T;
    while(T--) {
        cin >> n;
        bool ok = false;
        for(int i = 1;i <= n;i++) {
            cin >> x;
            if(x == 0) {
                ok = true;
            }
        }
        if(ok == true) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}