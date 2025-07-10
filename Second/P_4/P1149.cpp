#include <iostream>
using namespace std;
int counts[10] = {6,2,5,5,4,5,6,3,7,6};

int f(int x) {
    if(x == 0) {
        return 6;
    }
    int cnt = 0;
    while(x != 0) {
        cnt += counts[x % 10];
        x /= 10;
    }
    return cnt;
}

int main()
{
    int n,ans = 0;
    cin >> n;
    for(int i = 0;i < 720;i++) {
        for(int j = 0;j < 720;j++) {
            if(f(i) + f(j) + f(i + j) + 4 == n) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}