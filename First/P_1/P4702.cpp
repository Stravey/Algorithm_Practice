#include <iostream>
using namespace std;

long long n,a[105],sum = 0;

//Ç°×ººÍ
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        sum += a[i];
        sum %= 10;
    }
    if(sum & 1) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
    return 0;
}