#include <iostream>
using namespace std;

int n,x,y;
int joy = 0,sum = 0;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) 
    {
        cin >> x >> y;
        joy = joy + x + y - 8;
        sum += joy;
    }
    cout << sum;
    return 0;
}

//7

//5 3 ������ 0
//6 2 ������ 0
//7 2 ������ 1
//5 3 ������ 1
//5 4 ������ 2
//0 4 ������ -2
//0 6 ������ -4