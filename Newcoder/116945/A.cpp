#include <bits/stdc++.h>
using namespace std;
// AC
int main()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a = x1 * x1 + y1 * y1;
    int b = x2 * x2 + y2 * y2;
    int c = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    if((a + b) == c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}