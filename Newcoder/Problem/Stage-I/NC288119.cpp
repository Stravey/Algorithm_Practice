#include <iostream>
using namespace std;

bool isPrime(int x) {
    if(x < 2) return false;
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            return false;
        } 
    }
    return true;
}

int main()
{
    int x;
    cin >> x;
    bool flag = false;
    int ans = 0;
    if(x == 1) {
        cout << -1 << endl;
        return 0;
    }
    for(int i = x; i <= 2 * x; i++) {
        if(!isPrime(i)) {
            flag = true;
            ans = i;
            break;
        }
    }
    if(flag) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}