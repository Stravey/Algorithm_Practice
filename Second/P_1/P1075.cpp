#include <iostream>
using namespace std;

int p,ans = 0;

int zhi(int num) {
    for(int i = 2;i <= num;i++) {
        if(num % i == 0) {
            return num / i;
        }
    }
    return 0;
}

int main()
{
    cin >> p;
    ans = zhi(p);
    cout << ans;
    return 0;
}