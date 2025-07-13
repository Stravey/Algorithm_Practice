#include <iostream>
#include <vector>
using namespace std;

int getSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        int ans = i;
        int cnt = a[i];
        for(int j = 0;j < cnt;j++) {
            ans = getSum(ans);
            if(ans < 10) {
                break;
            }
        }
        cout << ans << " ";
    }
    return 0;
}