#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, m = 0;
    cin >> n;
    while(n --) {
        int x;
        cin >> x;
        if(x >= 10 && x <= 20) {
            cnt++;
        } else {
            m++;
        }
    }
    cout << cnt << " in" << endl;
    cout << m << " out" << endl;
    return 0;
}

