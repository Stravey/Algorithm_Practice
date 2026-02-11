#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    // 红 i
    for(int i = 0;i < 256;i++) {
        // 绿 j
        for(int j = 0;j < 256;j++) {
            // 蓝 k
            for(int k = 0;k < 256;k++) {
                if(k > i && k > j) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}