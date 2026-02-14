#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 200005;
int A[maxn], B[maxn], C[maxn];
int n;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        C[i] = 2 * A[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> B[i];
    }
    sort(B, B + n);
    sort(C, C + n);
    int i = 0, j = 0, ans = 0;
    while(i < n && j < n) {
        if(C[i] > B[j]) {
            j++;
            ans++;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}