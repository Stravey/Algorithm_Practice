// P12165 [���ű� 2025 ʡ C/Java A] ��̾���
#include "iostream"
#include "algorithm"
using namespace std;
long long n,a[50005],b[50005],ans = 0;
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int j = 0;j < n;j++) {
        cin >> b[j];
    }
    sort(a,a + n);
    sort(b,b + n);
    for(int i = 0;i < n;i++) {
        ans += abs(b[i] - a[i]);
    }
    cout << ans << endl;
    return 0;
}