#include <iostream>
using namespace std;
#define N 200005
int n;
long long a[N];
long long ans = 0,sum = 0;

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0;i < n;i++) {
        sum -= a[i];
        ans += a[i] * sum;
    }
    cout << ans << endl; 
    return 0;
}