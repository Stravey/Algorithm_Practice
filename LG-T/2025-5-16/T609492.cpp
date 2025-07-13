#include <iostream>
#include <cmath>

using namespace std;

int k,r_max = 255,g_max = 255,b_max = 255,ans = 0;
char c;

int main()
{
    cin >> k;
    cin >> c;
    if(c == 'r') {
        for(int i = 0;i <= 255;i++) {
            int g_now = min(i - k,255);
            int b_now = min(i - k,255);
            if(b_now >= 0 && g_now >= 0) {
                ans += (g_now + 1) * (b_now + 1);
            }
        }
    } else if(c == 'g') {
        for(int j = 0;j <= 255;j++) {
            int r_now = min(j - k,255);
            int b_now = min(j - k,255);
            if(r_now >= 0 && b_now >= 0) {
                ans += (r_now + 1) * (b_now + 1);
            }
        }
    } else if(c == 'b') {
        for(int t = 0;t <= 255;t++) {
            int g_now = min(t - k,255);
            int b_now = min(t - k,255);
            if(g_now >= 0 && b_now >= 0) {
                ans += (g_now + 1) * (b_now + 1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}