#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        vector<int> a(4);
        int cnt = 0;
        for(int i = 0;i < 4;i++) {
            cin >> a[i];
        }
        for(int i = 1;i < 4;i++) {
            if(a[i] > a[0]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}