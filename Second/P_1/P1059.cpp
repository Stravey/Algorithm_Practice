#include <iostream>
#include <algorithm>
using namespace std;

int n,a[1005],cnt;

int main()
{
    cin >> n;
    cnt = n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    // �������ǵ������������
    sort(a,a + n);
    for(int i = 0;i < n;i++) {
        // �����������ͼ�1 ǰ�������ǵ������������
        if(a[i + 1] == a[i]) {
            cnt--;
        }
    }
    cout << cnt << endl;
    for(int i = 0;i < n;i++) {
        // �������Ⱦ���� ǰ�������ǵ������������
        if(a[i + 1] != a[i]) {
            cout << a[i] << " ";
        }
    }
    return 0;
}