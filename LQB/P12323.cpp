//P12323 [À¶ÇÅ±­ 2023 Ê¡ Java B] ½×³ËÇóºÍ
#include "iostream"
const int mod = 1e9;
using namespace std;
int main()
{
    long long sum = 0,ans = 1;
    for(int i = 1;i <= 39;i++) {
        ans = (ans * i) % mod;
        sum = (sum + ans) % mod;
    }
    cout << sum << endl;
    return 0;
}