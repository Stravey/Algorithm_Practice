#include <iostream>
#include <vector>
using namespace std;
// dp problem �ο�����AI ��ʵҲ�ܼ� dp������ ���þ�ûд�� ��Ҫ��ǿ�ĵ������� ��ѧ����
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    vector<long long> dp(n + 1,0);
    dp[1] = a[1];
    for(int i = 2;i <= n;i++) {
        dp[i] = max(dp[i - 1],dp[i - 2] + a[i]);
    }
    cout << dp[n] << endl;
    return 0;
}