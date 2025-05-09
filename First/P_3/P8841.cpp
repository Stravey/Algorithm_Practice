#include <iostream>
#include <cmath>
using namespace std;

int n,a[1005],maxx,minn;

int main()
{
    cin >> n >> a[1];
    maxx = minn = a[1];
    for(int i = 2;i <= n;i++) {
        cin >> a[i];
        if(a[i] > maxx) {
            maxx = a[i];
        } 
        if(a[i] < minn) {
            minn = a[i];
        }
    }
    int fen = maxx - minn;
    for(int i = 1;i <= n;i++) {
        cout << floor(100.0 * (a[i] - minn) / fen) << " ";
    }
    return 0;
}
