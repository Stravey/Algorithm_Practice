#include <iostream>
#include <algorithm>
using namespace std;

int n,m,a[3005],sum[3005];

// Ç°×ººÍ
int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    int sum_min = sum[m];
    for (int i = m + 1; i <= n; i++) {
        int current_sum = sum[i] - sum[i - m];
        sum_min = min(sum_min, current_sum);
    }
    cout << sum_min << endl;
    return 0;
}