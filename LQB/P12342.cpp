// P12342 [���ű� 2025 ʡ B/Python B �ڶ���] ���в��
#include <iostream>
#include <algorithm>
using namespace std;
long long n,a[100005],b[100005],x,y,ans = 0;
int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        cin >> b[i];
    }
    sort(a + 1,a + n + 1);
    sort(b + 1,b + n + 1);
    x = y = n;
    while(true) {
        // ��� b > a ˵���Ǹ��� Ҫ�ı�һ�� ans++
        if(b[y] >= a[x]) {
            y--;
            ans++;
        } else {
            x--;
            y--;
        }
        if(!y) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}