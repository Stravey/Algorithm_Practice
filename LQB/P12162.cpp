// P12162 [���ű� 2025 ʡ C/Java A/�о�����] ��λ����
// �� 40500
#include <iostream>
using namespace std;

long long getdigitsum(int x) {
    long long sum = 0;
    while(x != 0) {
        long long a = x % 10;
        sum += a;
        x /= 10;
    }
    return sum;
}

int main()
{
    int ans = 0;
    for(int i = 1;i <= 202504;i++) {
        if(getdigitsum(i) % 5 == 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}