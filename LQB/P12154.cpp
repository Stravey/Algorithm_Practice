// P12154 [���ű� 2025 ʡ Java B] �������
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