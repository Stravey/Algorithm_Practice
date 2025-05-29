#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//计算平方
double pf(double x) {
    return x * x;
}

//计算距离
double jl(double a,double b,double c,double d) {
    return sqrt(pf(a - c) + pf(b - d));
}

int main()
{
    double x1,x2,x3,y1,y2,y3,ans = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ans = jl(x1,y1,x2,y2);
    ans += jl(x2,y2,x3,y3);
    ans += jl(x1,y1,x3,y3);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}