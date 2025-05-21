#include <iostream>
#include <vector>
using namespace std;

long long func(long long x) {
    if(x == 0 || x == 1) {
        return 1;
    } else {
        return x *  func(x - 1);
    }
}

long long total(long long x) {
    long long sum = 0;
    for(int i = 1;i <= x;i++) {
        sum += func(i);
    }
    return sum;
}

int main()
{   
    long long n,ans = 0;
    cin >> n;
    ans = total(n);
    cout << ans << endl;
    return 0;
}