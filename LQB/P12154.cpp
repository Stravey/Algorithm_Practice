// P12154 [À¶ÇÅ±­ 2025 Ê¡ Java B] ÌÓÀë¸ßËş
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check(int num) {
    int x = num % 10;
    int m = (x * x * x) % 10;
    return m == 3;
}
int main()
{
    int ans = 0;
    for(int i = 1;i <= 2025;i++) {
        if(check(i)) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}