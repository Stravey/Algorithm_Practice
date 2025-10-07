#include <bits/stdc++.h>
using namespace std;
// sliding window / two pointer
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int ans = 1;
    int left = 0;
    for(int right = 0;right < n;right++) {
        // if same , then move left pointer
        if(a[right] == a[right - 1]) {
            left = right;
        }
        ans = max(ans,right - left + 1);
    }
    cout << ans << endl;
    return 0;
}