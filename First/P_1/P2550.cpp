#include <iostream>
using namespace std;

int n,a,b,c[34],d[8];

int main()
{
    cin >> n;
    for(int i = 1;i <= 7;i++) {
        cin >> b;
        c[b] = 1;
    }
    for(int i = 1;i <= n;i++) {
        int x = 0;
        for(int j = 1;j <= 7;j++) {
            cin >> a;
            if(c[a] == 1) {
                x++;
            }
        }
        d[7 - x + 1]++;
    }
    for(int i = 1;i <= 7;i++) {
        cout << d[i] << " ";
    }
    return 0;
}