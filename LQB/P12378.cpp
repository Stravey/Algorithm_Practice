//P12378 [À¶ÇÅ±­ 2023 Ê¡ Python B] Ó²±Ò¶Ò»»
#include "iostream"
using namespace std;
int main()
{
    long long ans = 0;
    for(int k = 1;k <= 4046;k++) {
        long long total = 0;
        for(int i = 1;i < k;i++) {
            int j = k - i;
            if(j > i && j <= 2023) {
                total += min(i,j);
            }
        }
        if(total > ans) {
            ans = total;
        }
    }
    cout << ans << endl;
    return 0;
}