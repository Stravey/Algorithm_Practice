#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        
        int even = (n + 1) / 2;
        int odd = n / 2;

        int a_even = 0,a_odd = 0;
        for(int num : a) {
            if(num % 2 == 0) a_even++;
            else a_odd++;
        }

        if(a_even != even || a_odd != odd) {
            cout << -1 << endl;
            continue;
        }

        int cnt = 0;
        for(int i = 0;i < n;i++) {
            if(i % 2 == 0 && a[i] % 2 != 0) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}