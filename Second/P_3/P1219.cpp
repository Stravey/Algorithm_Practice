#include <iostream>
#define max_n 100
using namespace std;

int a[max_n],n,ans = 0;
int b[max_n],c[max_n],d[max_n]; // b[i] == 0 && c[x + i] == 0 && d[x - i + 15] == 0

void dfs(int x) {
    if(x > n) {
        ans++;
        if(ans <= 3) {
            for(int i = 1;i <= n;i++) {
                cout << a[i] << " ";
            }
            cout << " " << endl;
        }
        return;
    }
    for(int i = 1;i <= n;i++) {
        if(b[i] == 0 && c[x + i] == 0 && d[x - i + 15] == 0) {
            a[x] = i;
            // ռλ
            b[i] = 1;
            c[x + i] = 1;
            d[x - i + 15] = 1;
            // �ݹ�����
            dfs(x + 1);
            // ȡ��ռλ
            b[i] = 0;
            c[x + i] = 0;
            d[x - i + 15] = 0;
        }
    }
}

int main()
{
    cin >> n;
    dfs(1);
    cout << ans << endl;
    return 0;
}