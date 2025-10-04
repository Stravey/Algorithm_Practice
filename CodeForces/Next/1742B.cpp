#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        if(n == 1) {
            cout << "YES" << endl;
            continue;
        }
        sort(a.begin(),a.end());
        bool mark = true;
        for(int i = 0;i < n - 1;i++) {
            if(a[i + 1] <= a[i]) {
                mark = false;
                break;
            }
        }
        cout << (mark ? "YES" : "NO") << endl;
    }
    return 0;
}