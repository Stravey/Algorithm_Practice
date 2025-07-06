#include <iostream>
#define ll long long
using namespace std;

ll f(int n,int m) {
    if(m <= 0 || n < m) {
        return 0;
    }
    if(n == m) {
        return 1;
    } else {
        return f(n - 1,m - 1) + f(n - 1,m) * m;
    }
}

ll func(int i) {
    if(i == 1) {
        return 1;
    } else {
        return i * func(i - 1); 
    }
}

int main()
{   
    ll n,m;
    cin >> n >> m;
    cout << f(n,m) * func(m) << endl;
    return 0;
}
