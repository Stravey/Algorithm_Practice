#include <iostream>
using namespace std;

int main()
{
    // a��ʾ�ﳵʱ�� b��ʾ����ʱ��
    int n,a,b;
    cin >> n;
    a = 50 + n / 3.0;
    b = n / 1.2;
    if(a > b){
        cout << "Walk";
    } else if(a < b) {
        cout << "Bike";
    } else {
        cout << "All";
    }
    return 0;
}
