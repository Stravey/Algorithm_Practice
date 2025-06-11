#include <iostream>
#include <algorithm>
#include <climits>
#define max_n 200005

// ¶þ·Ö²éÕÒ
using namespace std;

int a[max_n],n,c,result;

bool check(int x) {
    int k = 1;
    int last = a[1];
    for(int i = 2;i <= n;i++) {
        if(a[i] - last >= x) {
            last = a[i];
            k++;
        }
    }
    return k >= c;
}

int find() {
    int l = 0;
    int r = a[n] - a[1];
    int ans,mid;
    while(l <= r) {
        if(check(mid = l + r >> 1)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

void solve() {
    cin >> n >> c;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    result = find();
    cout << result << endl;
}

int main()
{
    solve();
    return 0;
}
