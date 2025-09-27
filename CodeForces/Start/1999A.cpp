#include <iostream>
using namespace std;

int digit_num(int x) {
    int ans = 0;
    while(x != 0) {
        int digit = x % 10;
        ans += digit;
        x /= 10;
    }
    return ans;
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << digit_num(n) << endl;
    }
    return 0;
}