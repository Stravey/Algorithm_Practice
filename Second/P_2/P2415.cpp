#include <iostream>
#include <cmath>
using namespace std;

int a;           //Ԫ�صļ����е���
int count = 0;   //����
int sum = 0;     //����
long long ans;   //��

int main()
{
    while(cin >> a) {
        count++;
        sum += a;
    }
    ans = sum * pow(2,count - 1);
    cout << ans << endl;
    return 0;
}