#include <iostream>
using namespace std;
int f[2005];
int n,m,p,q;
char opt;

// ���鼯 find���� ģ��
int find(int x) {
    while (x != f[x]) {
        f[x] = f[f[x]]; // ·��ѹ��
        x = f[x];
    }
    return x;
}

int main()
{
    cin >> n >> m;
    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }
    // 2������Ϊ��Ҫһ��������� ������ǵ��˵ĵ���
    for(int i = 1;i <= 2 * n;i++) {
        f[i] = i;
    }
    for(int i = 1;i <= m;i++) {
        cin >> opt >> p >> q;
        if (p < 1 || p > n || q < 1 || q > n || p == q) {
            continue; 
        }
        // �ҵ� p ���峤   �ҵ� q ���峤
        int rootP = find(p);
        int rootQ = find(q);
        if (opt == 'F') {
            f[rootP] = rootQ; // �ϲ�����
        } else if (opt == 'E') {
            // �ϲ�p�ĵ�����q������
            int enemyP = find(p + n);
            f[enemyP] = rootQ;
            // �ϲ�q�ĵ�����p������
            int enemyQ = find(q + n);
            f[enemyQ] = rootP;
        }
    }
    int ans = 0;
    for(int i = 1;i <= n;i++) {
        if(i == f[i]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}