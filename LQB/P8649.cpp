// P8649 [���ű� 2017 ʡ B] k ������
#include <iostream>
using namespace std;
int n,k,a[100005];
long long b[100005],ans = 0;
int cnt[100005] = {0};
int main()
{
    cin >> n >> k;
    cnt[0] = 1;
    b[0] = 0;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        // ǰ׺�ͼ���
        b[i] = b[i - 1] + a[i];
        // ����
        int r = b[i] % k;
        if(r < 0) {
            r += k;
        }
        ans += cnt[r];
        cnt[r]++;
    }
    cout << ans << endl;
    return 0;
}