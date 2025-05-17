#include <iostream>
#include <algorithm>
using namespace std;

int a[3];
char c[3];

int main()
{
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a + 3);
    cin >> c;
    for(int i = 0;i < 3;i++) {
        if(c[i] == 'A') {
            cout << a[0];
        } else if(c[i] == 'B') {
            cout << a[1];
        } else if(c[i] == 'C') {
            cout << a[2];
        } 
        if(i != 2) {
            cout << " ";
        }
    }
    return 0;
}