#include <iostream>
using namespace std;

int main()
{
    int k,x = 0,y = 0,z = 0,a[101];
    cin >> k;
    for(int i = 0;i < k;i++) {
        cin >> a[i];
        if(a[i] == 1) {
            x++;
        } else if(a[i] == 5) {
            y++;
        } else if(a[i] == 10) {
            z++;
        }
    }
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}