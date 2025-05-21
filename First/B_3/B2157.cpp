#include <iostream>
using namespace std;

double sum = 0.0;
const double b = 0.1;
const int maxText = 70;

int main()
{
    int n,a[2000];
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        double mes = (a[i] + maxText - 1) / maxText;
        sum += mes * b;
    }
    cout << sum << endl;
    return 0;
}