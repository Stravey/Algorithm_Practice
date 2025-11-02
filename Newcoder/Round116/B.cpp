#include <iostream>
using namespace std;
string solve(int a,int b,int c,int d) {
    if((a > c && b < d) || (a < c) && (b > d)) {
        return "A";
    } else if(b < c || a > d) {
        return "B";
    } else {
        return "C";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << solve(a,b,c,d) << endl;    
    }
    return 0;
}