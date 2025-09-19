#include <bits/stdc++.h>
using namespace std;
// T668545 [ÓïÑÔÔÂÈü 202509] À¶Ãµ¹å
int main()
{
    int a,b,c,ans = 0;
    cin >> a >> b >> c;
    int max_red = min(a / 2,10);
    int min_white = c / 2;
    for(int i = 0;i <= max_red;i++) {
        for(int j = 0;j <= b;j++) {
            for(int k = max(min_white,0);k <= c;k++) {
                if(i + j + k == 0) continue;
                if(i > j) continue;
                if(k > j) continue;
                if(j != 0 && k != 0) {
                    if(1LL * k * k <= 1LL * i * j) {
                        continue;
                    }
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}