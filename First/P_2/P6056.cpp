#include <iostream>
#include <cmath>
using namespace std;

long long s,i,r,n;
double x,y; 

int main()
{
    cin >> s >> i >> n;
    cin >> x >> y;
    for(int step = 1;step <= n;step++) {
        long long si = s,ii = i,ri = r;
        r += ceil(ii * y);
        i -= ceil(ii * y);
        i += ceil(x * si * ii);
        s -= ceil(x * si * ii);
        if(s < 0) {
            i += s;
            s = 0;
        }
        if(i < 0) {
            i = 0;
            r += i;
        }
    }
    cout << s << " " << i << " " << r << endl;
    return 0;
}