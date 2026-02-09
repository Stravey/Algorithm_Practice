#include <iostream>
#include <unordered_map>
#define ll long long
#define SB 1000000001
using namespace std;
int n;
int A[100001], B[100001];
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> A[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> B[i];
    }
    ll ret = 0;
    unordered_map<ll, int> hash;
    // 题设为 i < j 因此需要先查再插
    for(int j = 0;j < n;j++) {
        // 查找
        ll y = (ll)B[j] * SB + A[j];
        ret += hash[y];
        // 插入
        ll x = (ll)A[j] * SB + B[j];
        hash[x]++;
    }
    cout << ret << endl;
    return 0;
}
