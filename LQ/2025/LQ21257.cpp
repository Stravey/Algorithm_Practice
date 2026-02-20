#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
#define maxn 200005
double a[maxn];
// ÅÐ¶Ï
bool check(double now, int i) {
    if(now < a[i - 1]) {
        return true;
    }
    if(fabs(now - a[i - 1] < 1e-6)) {
        return true;
    }
    return false;
}
// ¶þ·Ö
int bincheck(int index) {
    int l = -1, r = 1000000;
    while(l + 1 < r) {
        int mid = (l + r) / 2;
        if(check(mid, mid)) {
            l = mid;
        } else {
            r = mid;
        }
    } 
    return r;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        unsigned int x;
        cin >> x;
        a[i] = log(x) / log(2);
    }
    ll cnt = 0;
    for(int i = 1; i < n; i++) {
        int c = bincheck(i);
        cnt += c;
    }
    cout << cnt << endl;
    return 0;
}