#include <iostream>
using namespace std;

int main()
{
    int a, n, sum = 0;;
    cin >> a;
    while(cin >> n) {
        if(n > 0) {
            for(int i = 1; i <= n; i++) {
                sum += a;
                a++;
            }
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
