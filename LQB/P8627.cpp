// P8627 [���ű� 2015 ʡ A] ���ϻ���
#include <iostream>
using namespace std;

int main()
{
    int n,sum;
    cin >> n;
    sum = n;
    while(n > 2) {
        sum += n / 3;
        n = n % 3 + n / 3;
    }
    cout << sum << endl;
    return 0;
}