#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A[101];
    for(int i = 0; i < 100; i++) {
        cin >> A[i];
        if(A[i] <= 10) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << A[i] << endl;
        }
    }
    return 0;
}