#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    for(int i = 1;i <= 2025; i++) {
        for(int j = i + 1; j <= 2025; j++) {
            for(int k = j + 1; k <= 2025; k++) {
                if(k - j == j - i) {
                    ans++;
                }
            }
        }
    }
    cout << 2 * ans << endl;
    return 0;
}