// P10900 [���ű� 2024 ʡ C] ����ʫ��
#include <iostream>
using namespace std;
long long n,a[200005],ans = 0;
bool isPowerOfTwo(long long x) {
    return x > 0 && (x & (x - 1)) == 0;
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        // 2���ݲ����Ա�ʾΪ�����������ĺ� ������
        if(isPowerOfTwo(a[i])) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
