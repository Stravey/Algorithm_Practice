#include <iostream>
#include <algorithm>
using namespace std;

// ˼·��
// 1.�ȴ�0�����ֵ
// 2.�ٴ����ֵ��ʣ���е���Сֵ
// 3.�ٴ���Сֵ��ʣ���е����ֵ
// 4.�ظ�2 3����֪������������ʯͷ

int main()
{
    long long n,a[305],ans = 0,l,r,mark = 1,tmp = 0;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    l = 0;
    r = n - 1;
    mark = 1;
    while(l <= r) {
        if(mark == 1) {
            ans += (a[r] - tmp) * (a[r] - tmp);
            tmp = a[r];
            r--;
        } else {
            ans += (a[l] - tmp) * (a[l] - tmp);
            tmp = a[l];
            l++;
        }
        mark = 1 - mark;
    }
    cout << ans << endl;
    return 0;
}