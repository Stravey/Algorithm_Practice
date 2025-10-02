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
        int target;
        if(a[0] == a[1] || a[0] == a[2]) {
            target = a[0];
        } else {
            target = a[1];
        }
        for(int i = 0;i < n;i++) {
            if(a[i] != target) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}