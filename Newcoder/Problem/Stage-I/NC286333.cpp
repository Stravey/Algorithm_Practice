#include <iostream>
using namespace std;

int a[7];

int main()
{
    for(int i = 0; i < 7; i++) {
        cin >> a[i];
    }
    // 本质是找7个数中的最小值
    int minn = 1e9 + 7;
    for(int i = 0; i < 7; i++) {
        if(a[i] < minn) {
            minn = a[i];
        }
    }
    cout << minn << endl;
    return 0;
}