#include <iostream>
#include <iomanip>
using namespace std;

int n,arr[105],a = 0,b = 0,c = 0,d = 0;

int main()
{   
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
        if(arr[i] >= 0 && arr[i] <= 18) {
            a++;
        }
        if(arr[i] >= 19 && arr[i] <= 35) {
            b++;
        }
        if(arr[i] >= 36 && arr[i] <= 60) {
            c++;
        }
        if(arr[i] >= 61) {
            d++;
        }
    }
    cout << fixed << setprecision(2) << (a * 1.0 / n) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (b * 1.0 / n) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (c * 1.0 / n) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (d * 1.0 / n) * 100 << "%" << endl;
    return 0;
}