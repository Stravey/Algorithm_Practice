#include <iostream>
using namespace std;
using LL = long long;
const int N = 1010;
int a[N][N];

int main()
{
    LL n, sum = 0;
    int c = 1;
    cin >> n;
    // n = 2
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            a[i][j] = c++;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        int t = (i + 1) / 2;
        t = 2 * (t - 1) + 1;
        sum += a[i][t] + a[i][t + 1];
    }
    if(n % 2) sum += n * n;
    cout << sum << endl;
    return 0;
}