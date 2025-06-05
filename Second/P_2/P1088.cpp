#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,a[10010];
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(;m--;) {
        next_permutation(a + 1,a + n + 1);
    }
    for(int i = 1;i <= n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}