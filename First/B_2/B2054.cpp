#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,age,sum = 0;
    double avg;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> age;
        sum += age;
    }
    avg = sum * 1.0 / n;
    cout << fixed << setprecision(2) << avg << endl;
    return 0;
}
