// P12339 [���ű� 2025 ʡ B/Python B �ڶ���] 25 ֮��
#include <iostream>
using namespace std;

int main()
{
    int n,a = 0;
    cin >> n;
    for(int i = 0;i <= 24;i++) {
        a += i;
    }
    cout << 25 * n + a << endl;
    return 0;
}