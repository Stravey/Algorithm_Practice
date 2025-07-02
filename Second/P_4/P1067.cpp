#include <iostream>
using namespace std;

int main()
{
    int n,a[105];
    cin >> n;
    for(int i = n;i >= 0;i--) {
        cin >> a[i];
    }
    for(int i = n;i >= 0;i--) {
        // 输出系数
        if(a[i] == 0) {
            continue;
        }
        if(i == 0) {
            if(a[i] > 0) {
                cout << "+" << a[i];
                break;
            } else {
                cout << a[i];
                break;
            }
        }
        if(a[i] > 0) {
            if(i != n) {
                cout << "+";
            } 
            if(a[i] != 1) {
                cout << a[i];
            }
        }
        if(a[i] < 0) {
            if(a[i] == -1) {
                cout << "-";
            } else {
                cout << a[i];
            }
        }
        // 输出指数
        if(i > 1) {
            printf("x^%d",i);
        } else if(i == 1) {
            cout << "x";
        }
    }
    return 0;
}