// Q1. 奇数和与偶数和的最大公约数
#include <iostream>
using namespace std;
int n;
int gcd(int a,int b) {
    while(b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
int gcdOfOddEvenSums(int n) {
    int odd_sum = n * n;
    int even_sum = n * (n + 1);
    return gcd(odd_sum,even_sum);
}
int main()
{
    cin >> n;
    int ans = gcdOfOddEvenSums(n);
    cout << ans << endl;
    return 0;
}