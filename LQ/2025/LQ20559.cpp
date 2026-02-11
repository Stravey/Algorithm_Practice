#include <iostream>
using namespace std;
int sum(int x) {
    int ans = 0;
    while(x) {
        int digit = x % 10;
        ans += digit;
        x /= 10;
    }
    return ans;
}
int main()
{   
    int cnt = 0;
    for(int i = 1;i <= 202504;i++) {
        if(sum(i) % 5 == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}