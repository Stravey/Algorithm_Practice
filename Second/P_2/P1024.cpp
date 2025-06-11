#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define eps 1e-4
double A,B,C,D;

double func(double x) {
    return A * x * x * x + B * x * x + C * x + D;
}

int main() 
{
    cin >> A >> B >> C >> D;
    for(int i = -100;i <= 100;i++) {
        double L = i,R = i + 1,mid;
        if(fabs(func(L)) < eps) {
            cout << fixed << setprecision(2) << L << " ";
        } else if(fabs(func(R)) < eps) {
            continue;
        } else if(func(L) * func(R) < 0) {
            while(R - L > eps) {
                mid = (L + R) / 2;
                if(func(mid) * func(R) > 0) {
                    R = mid;
                } else {
                    L = mid;
                }
            }
            cout << fixed << setprecision(2) << L << " ";
        }
    }
    return 0;
}