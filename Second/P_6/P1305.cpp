#include <iostream>
using namespace std;
char a[30][3];
int n;
void func(char x) {
    if(x != '*') {
        cout << x;
        for(int i = 1;i <= n;i++) {
            if(a[i][0] == x) {
                func(a[i][1]);
                func(a[i][2]);
            }
        }
    }
    return;
}
int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    func(a[1][0]);
    return 0;
}