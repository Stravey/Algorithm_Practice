#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int a,b,ans = 1;
string s;

int main()
{
    cin >> a >> b;
    a %= 7;
    for(int i = 1;i <= b;i++) {
        ans *= a;
        ans %= 7;
    }
    switch (ans) {
        case 0 : cout << "Sunday"; break;
        case 1 : cout << "Monday"; break;
        case 2 : cout << "Tuesday"; break;
        case 3 : cout << "Wednesday"; break;
        case 4 : cout << "Thursday"; break;
        case 5 : cout << "Friday"; break;
        case 6 : cout << "Saturday"; break;
    }
    return 0;
}