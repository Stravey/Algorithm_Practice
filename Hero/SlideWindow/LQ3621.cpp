#include <iostream>
#include <string>
using namespace std;
int slideWindow(int n, int k, const string& a) {
    int i = 0,j = -1;
    int ans = 0;
    int count[256] = {0};
    while(j++ < n - 1) {
        count[a[j]]++;
        while(count[a[j]] > k) {
            count[a[i]]--;
            i++;
        }
        ans = max(ans, j - i + 1);
    }
    return ans;
}
int main()
{
    string s;
    int k;
    cin >> s;
    cin >> k;
    int ans = slideWindow(s.size(), k, s);
    cout << ans << endl;
    return 0;
}