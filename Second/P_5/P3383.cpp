// P3383 ��ģ�塿����ɸ����(ŷ��ɸ)O(n)  �Ȱ�ʽɸ��O(nlogn)
#include <bits/stdc++.h>
using namespace std;
bool isPrime[100000010];
//isPrime[i] == 1��ʾ��i������
int Prime[6000010], cnt = 0;
void getPrime(int n) {
    memset(isPrime,1,sizeof(isPrime));
    isPrime[1] = 0;
    for(int i = 2;i <= n;i++) {
        if(isPrime[i]) {
            Prime[++cnt] = i;
        }
        for(int j = 1;j <= cnt && i * Prime[j] <= n;j++) {
            isPrime[i * Prime[j]] = 0;
            if(i % Prime[j] == 0) {
                break;
            }
        }
    }
}
int main()
{
    int n,q;
    ios::sync_with_stdio(0);
    cin >> n >> q;
    getPrime(n);
    while(q--) {
        int k;
        cin >> k;
        cout << Prime[k] << endl;
    }
    return 0;
}