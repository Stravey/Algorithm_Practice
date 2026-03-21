#include <iostream>
#include <climits>
using namespace std;
int a[1005];
int main()
{
    int n, pos = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < a[pos]) {
            pos = i;
        }
    }
    cout << "Minimum value: " << a[pos] << endl;
    cout << "Position: " << pos << endl;
    return 0;
}