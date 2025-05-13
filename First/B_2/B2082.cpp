#include <iostream>
using namespace std;

int l,r,cnt = 0,c,d;

int main()
{
    cin >> l >> r;
    for(int i = l;i <= r;i++) {
        c= i;
        while(c != 0) {
            d = c % 10;
            c /= 10;
            if(d == 2) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}