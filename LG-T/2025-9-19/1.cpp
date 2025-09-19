#include <bits/stdc++.h>
using namespace std;
// T668542 [ÓïÑÔÔÂÈü 202509] ÖÇ»ÛÊ³ÌÃ
int main()
{
    int a,b,c,op;
    cin >> a >> b >> c;
    cin >> op;
    if(op == 0 || op == 1) {
        cout << a + b + c << endl;
        return 0;
    } else if(op == 2) {
        cout << "Fail to pay." << endl;
    }
    return 0;
}