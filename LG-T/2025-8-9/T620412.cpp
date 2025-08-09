// T620412 [IAMOI R2] ´«ÆæÄ£Êý
#include <iostream>
const int mod = 998244353;
using namespace std;
int main() 
{      
    long long n;
    cin >> n;
    long long k = n / mod;
    long long rest = n % mod;
    long long sum = k * (rest + 1) % mod;
    cout << sum << endl;
    return 0; 
}