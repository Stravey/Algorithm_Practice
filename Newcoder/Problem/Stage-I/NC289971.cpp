#include <iostream>
using namespace std;

// 分情况讨论 n 为奇数还是偶数
int main()
{
    int n;
    cin >> n;
    if(n & 1) {
        cout << "kou" << endl;
    } else {
        cout << "yukari" << endl;
    }
    return 0;
}