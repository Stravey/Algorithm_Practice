#include <iostream>
#include <algorithm>
using namespace std;

struct milk{
    int price;
    int volume;
}a[5005];

bool cmp(milk x,milk y) {
    return x.price < y.price;
}

int main()
{
    int n,m,ans = 0,mark = 0;
    cin >> n >> m;
    for(int i = 0;i < m;i++) {
        cin >> a[i].price >> a[i].volume;
    }
    sort(a,a + m,cmp);
    for(int i = 0;i < m;i++) {
        if(n >= a[i].volume) {
            ans += a[i].volume * a[i].price;
            n -= a[i].volume;
        } else {
            ans += a[i].price * n;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}