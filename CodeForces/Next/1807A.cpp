#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a + b == c) {
            cout << "+" << endl;
        } else if(a - b == c) {
            cout << "-" << endl;
        }
    }
    return 0;
}