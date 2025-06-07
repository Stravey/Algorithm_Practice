#include <iostream>
using namespace std;

int n,h[30] = {1,1};

// 递推式：h[n] = h[0] * h[n - 1] + h[1] * h[n - 2] + ...
// 验证：h[n] = C2n n / (n + 1)

int main()
{
    cin >> n;
    for(int i = 2;i <= n;i++) {
        for(int j = 0;j < i;j++) {
            h[i] += h[j] * h[i -j - 1];
        }
    }
    cout << h[n];
    return 0;
}