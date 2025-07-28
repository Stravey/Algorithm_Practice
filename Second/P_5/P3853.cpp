#include <iostream>
using namespace std;

// ���ִ�

int main()
{
    int length,n,k,a[100005],now,before = 0,left = 1,right = 0;
    cin >> length >> n >> k;
    // Ԥ��������
    for(int i = 0;i < n;i++) {
        cin >> now;
        a[i] = now - before;
        before = now;
        if(right < a[i]) {
            right = a[i];
        }
    }
    a[n] = length - before;
    if(right < a[n]) {
        right = a[n];
    }
    // �жϱ߽�
    if(k == 0){
        cout << right << endl;
        return 0;
    }
    // ����
    while(left <= right) {
        int mid = (left + right) / 2,count = 0,tmp;
        for(int i = 0;i <= n;i++) {
            tmp = a[i];
            // �������ʱ����ʯͷ
            while(tmp > mid) {
                count++;
                tmp -= mid;
            }
        }
        if(count <= k) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    // ������
    cout << left << endl;
    return 0;
}
