#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        vector<int> a(3);
        for(int i = 0;i < 3;i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        cout << a[1] << endl;
    }
    return 0;
}