#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
    double n;
    cin >> n;
    if(n <= 150) {
        cout << setprecision(1) << fixed << n * 0.4463 << endl;
    } else if(n > 150 && n <= 400) {
        cout << setprecision(1) << fixed << ((150 * 0.4463) + (n - 150) * 0.4663) << endl;
    } else {
        cout << setprecision(1) << fixed << (150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663) << endl;
    }
    return 0;
}
