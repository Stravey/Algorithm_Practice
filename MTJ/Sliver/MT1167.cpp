#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long square = (long long)n * n; 
    
    int temp = n;
    int mod = 1;
    
    while (temp > 0) {
        mod *= 10;
        temp /= 10;
    }
    
    if (square % mod == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}