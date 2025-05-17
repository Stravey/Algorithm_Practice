#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n,x,y,least = INT_MAX;
    cin >> n;
    for(int i = 1;i <= 3;i++) {
        cin >> x >> y;
        if(n % x == 0 || x % n == 0) {
            least = min(least,n / x * y);
        } else {
            least = min(least,n / x * y + y);
        }
    }
    cout << least << endl;
    return 0;
}