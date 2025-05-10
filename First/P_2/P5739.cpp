#include <iostream>
using namespace std;

int n,ans = 0;

int jc(int x){ 
    if(x == 1) {
        return 1;
    } else {
        return x * jc(x - 1);
    }
}

int main()
{
    cin >> n;
    ans = jc(n);
    cout << ans << endl;
    return 0;
}