#include <iostream>
#define mod 1000000007
using namespace std;

long long a[5005] = {0},ans = 0,tmp,n;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> tmp;
        a[tmp]++;
    }
    for(int i = 1;i <= 2500;i++) {
        for(int j = i;j <= 5000 - i;j++) {
            int k1 = a[i];
            int k2 = a[j];
            int k3 = a[i + j];
            if(k3 >= 2) {
                if(i == j && k1 >= 2) {
                    tmp = k1 * (k1 - 1) / 2 * k3 * (k3 - 1) / 2;
                    ans += tmp;
                }
                if(i != j && k1 >= 1 && k2 >= 1) {
                    tmp = k1 * k2 * k3 * (k3 - 1) / 2;
                    ans += tmp;
                }
            }
        }
    }
    ans %= mod;
    cout << ans << endl;
    return 0;
}