#include <iostream>
using namespace std;

// 本质很简单
int main()
{
    int x;
    cin >> x;
    if(x % 2 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}