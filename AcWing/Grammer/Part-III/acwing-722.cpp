#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while(cin >> n >> m && (n != 0 && m != 0)) {
        if(n > 0 && m > 0) {
            int sum = 0;
            if(n > m) swap(n, m);
            for(int i = n; i <= m; i++) {
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;   
        }
    }
    return 0;
}
