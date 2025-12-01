#include <iostream>
using namespace std;
bool check(int n) {
    while(n) {
        int s = n % 10;
        n /= 10;
        if(s == 2 || s == 0 || s == 1 || s == 9) {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    long long ans = 0,n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        if(check(i)) {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}