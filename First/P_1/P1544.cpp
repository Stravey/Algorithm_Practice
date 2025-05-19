#include <iostream>
using namespace std;

int m,n,d[10];

int main()
{
    cin >> m >> n;
    for(int i = m;i <= n;i++) {
        for(int temp = i;temp;temp /= 10) {
            d[temp % 10]++;
        }
    }
    for(int i = 0;i < 10;i++) {
        cout << d[i] << " ";
    }
    return 0;
}