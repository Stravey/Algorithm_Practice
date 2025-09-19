#include <bits/stdc++.h>
using namespace std;
// T668543 [ÓïÑÔÔÂÈü 202509] ÑµÁ·¼ÇÂ¼
int main()
{
    int d,ans = 0;
    int cnt = 0;
    cin >> d;
    for(int i = 1;i <= d;i++) {
        int x;
        cin >> x;
        if(x == 0) {
            ans += 100;
        } else if(x == 1) {
            cnt++;
            if(cnt % 2 == 1) {
                ans += 50;
            } else {
                ans -= 30;
            }
        }
        cout << ans << endl;
    }
    return 0;
}