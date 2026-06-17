#include <iostream>
#include <algorithm>
using namespace std;

int a[3];

// 本质找最大值 然后与其他两数做差值
int main()
{
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    int ans = abs(a[2] - a[1]) + abs(a[2] - a[0]);
    cout << ans << endl;
    return 0;
}