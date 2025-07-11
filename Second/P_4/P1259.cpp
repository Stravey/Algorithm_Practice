#include <iostream>
#include <string>
using namespace std;
int n;
char a[205];
string b[4] = {"ooo*o**--","o--*o**oo","o*o*o*--o","--o*o*o*o"};

void print(int l,int r) {
    for(int i = l;i <= r;i++) {
        cout << a[i];
    }
    cout << endl;
}

void func(int step) {
    if(step == 3) {
        for(int i = 0;i < 4;i++) {
            cout << b[i];
            print(10,2 * n + 2);
        }
        return;
    }
    print(1,2 * n + 2);
    swap(a[step],a[2 * step + 1]);
    swap(a[step + 1],a[2 * step + 2]);
    print(1,2 * n + 2);
    swap(a[step],a[2 * step - 1]);
    swap(a[step + 1],a[2 * step]);
    func(step - 1);
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        a[i] = 'o';
        a[i + n] = '*';
    }
    a[2 * n + 1] = '-';
    a[2 * n + 2] = '-';
    func(n);
    return 0;
}