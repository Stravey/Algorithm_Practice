#include <iostream>
#include <cmath>
using namespace std;

int n,k,x,cnt = 0;

int main()
{
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        cin >> x;
        if(x == k) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}