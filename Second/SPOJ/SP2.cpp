#include <iostream>
using namespace std;

bool check(int x) {
    if(x == 0 || x == 1) {
        return false;
    } 
    for(int i = 2;i * i <= x;i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,a,b;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        for(int i = a;i <= b;i++) {
            if(check(i)) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
