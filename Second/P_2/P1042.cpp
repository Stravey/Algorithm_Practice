#include <iostream>
#include <cmath>
using namespace std;

int f[2] = {11,21}; // �������Ƶĵ÷�
int a[25 * 2600 + 10],n = 0;

int main()
{   
    char tmp;
    while(1) {
        cin >> tmp;  // ������
        if(tmp == 'E') {
            break;
        } else if(tmp == 'W') {
            a[n++] = 1;   // ����Ӯ
        } else if(tmp == 'L') {
            a[n++] = 0;   // ������
        }
    }
    for(int k = 0;k < 2;k++) {   // ��������ѭ��
        int w = 0,l = 0;
        for(int i = 0;i < n;i++) {
            w += a[i],l += 1 - a[i];
            if((w >= f[k] || l >= f[k]) && abs(w - 1) >= 2) {    /* ��ʤ�ߴ��ڻ�ʤ�����ұȶ��ָ�2������ */
                cout << w << ":" << l << endl;
                w = l = 0;
            }
        }
        cout << w << ":" << l << endl;
        cout << endl;
    }
    return 0;
}