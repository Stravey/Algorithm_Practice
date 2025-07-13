#include <iostream>
#include <cmath>
using namespace std;

int w,f,a,r;
double cf,ai;

int main()
{
    cin >> w >> f >> a >>r;
    cf = f * 1.0 / w;
    ai = a * 1.0 / w;
    if(w != 0) {
        if(cf <= 0.2 && ai <= 0.3 && w >= r) {
            cout << "Accepted" << endl;
        } else {
            cout << "Rejected" << endl;
        }
    } else {
        cout << "Rejected" << endl;
    }
    return 0;
}