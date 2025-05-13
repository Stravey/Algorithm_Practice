#include <iostream>
#include <cstring>
using namespace std;

string m;
long long k, cnt = 0;

int main()
{
    cin >> m >> k;
    for (char c : m) {
        if (c == '3') {
            cnt++;
        }
    }
    if (cnt == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}