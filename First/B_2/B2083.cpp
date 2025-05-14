#include <iostream>
using namespace std;

int a,b,f;
char c;

int main()
{
    cin >> a >> b >> c >> f;
    // ¿ÕÐÄ
    if(f == 0) {
        for(int i = 0;i < b;i++) {
            cout << c;
        }
        cout << endl;
        for(int i = 1;i <= a - 2;i++) {
            cout << c;
            for(int j = 1;j <= b - 2;j++) {
                cout << ' ';
            }
            cout << c << endl;
        }
         for(int i = 0;i < b;i++) {
            cout << c;
        }
        cout << endl;
    } else {
        for(int i = 1;i <= a;i++) {
            for(int j = 1;j <= b;j++) {
                cout << c;
            }
            cout << endl;
        }
    }
    return 0;
}