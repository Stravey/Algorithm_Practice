#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,sum = 0,x;
    double avg;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> x;
        sum += x;
    }
    avg = sum * 1.0 / n;
    cout << sum << " ";
    cout << fixed << setprecision(5) << avg << endl;
    return 0;
}