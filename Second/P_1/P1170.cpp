#include <iostream>
using namespace std;

// 最小公倍数
int gcd(int a,int b)
{
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int n,ax,ay,bx,by;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> ax >> ay >> bx >> by;
        if(gcd(abs(ax - bx),abs(ay - by)) == 1) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    } 
    return 0;
}