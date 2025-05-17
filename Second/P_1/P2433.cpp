#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double pi = 3.141593;
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 14 / 4 << endl;
        cout << 3 * 4 << endl;
        cout << 14 - 3 * 4 << endl;
    } else if (T == 4) {
        cout << 500 * 1.0 / 3 << endl;
    } else if (T == 5) {
        cout << (260 + 220) / (12 + 20) << endl;
    } else if (T == 6) {
        cout << sqrt(117) << endl;
    } else if (T == 7) {
        int a = 100;
        a += 10;
        cout << a << endl;
        a -= 20;
        cout << a << endl;
        a = 0;
        cout << a << endl;
    } else if (T == 8) {
        cout << 2 * 5 * pi << endl;
        cout << 5 * 5 * pi << endl;
        cout << 4.0 / 3 * pi * 125 << endl;
    } else if (T == 9) {
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
    } else if (T == 10) {
        cout << 9 << endl;
    } else if (T == 11) {
        cout << 100.0 / (8 - 5) << endl;
    } else if (T == 12) {
        cout << 13 << endl;
        cout << 'R' << endl;
    } else if (T == 13) {
        double v = 4.0 / 3 * pi * 64 + 4.0 / 3 * pi * 1000;
        v = pow(v,1.0 / 3);
        cout << fixed << setprecision(0) << v << endl;
    } else if (T == 14) {
        cout << 50 << endl;
    }
    return 0;
}
