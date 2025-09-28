#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++) cin >> b[i];

    auto min_m = min_element(a.begin(),a.end());
    int ans_a = min_m - a.begin() + 1;

    auto max_m = max_element(b.begin(),b.end());
    int ans_b = max_m - b.begin() + 1;

    cout << ans_a << " " << ans_b << endl;
    return 0;
}
