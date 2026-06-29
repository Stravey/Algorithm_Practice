#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << n + (3 - n % 3) % 3 << endl;
    return 0;
}