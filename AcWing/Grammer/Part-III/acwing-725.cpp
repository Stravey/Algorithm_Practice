#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, sum = 1;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x == 1) {
            cout << x << " is not perfect" << endl;
            continue;
        }
        for(int i = 2; i <= sqrt(x); i++) {
            if(i == sqrt(x) && x % i == 0) {
                sum += i;
            } 
            if(x % i == 0) {
                sum += i + x / i;
            }
        }
        if(sum == x) {
            cout << x << " is perfect" << endl; 
        } else {
            cout << x << " is not perfect" << endl;
        }
        sum = 1;
    }
    return 0;
}

