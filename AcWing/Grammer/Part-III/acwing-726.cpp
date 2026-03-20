#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
    if(x == 1) {
        return false;
    }
    for(int i = 2; i <= x / i; i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(is_prime(x)) {
            cout << x << " is prime" << endl; 
        } else {
            cout << x << " is not prime" << endl;
        }
    }
    return 0;
}
