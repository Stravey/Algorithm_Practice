#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int a[25];

int main()
{
    int n,r;
    cin >> n >> r;
    // ö��ȫ��
    for(int S = (1 << n) - 1;S >= 0;S--) {
        int cnt = 0;
        for(int i = 0;i < n;i++) {
            if(S & (1 << i)) {
                a[cnt++] = i; // ��¼ÿһλ
            }
        }
        if(cnt == r) {
            // ��λ��ʾ1 �������
            for(int i = r - 1;i >= 0;i--) {
                cout << setw(3) << n - a[i];
            }
            cout << endl;
        }
    }
    return 0;
}