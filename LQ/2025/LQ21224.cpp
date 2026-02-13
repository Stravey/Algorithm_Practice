#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int ans = INT_MIN;
    for(int i = 1;i <= 2025; i++) {
        for(int j = 1;j <= 2025; j++) {
            if(i * j == 2025) {
                ans = max(ans, (i + j) * 2);
            }
        }
    }
    cout << ans << endl;
    return 0;
}