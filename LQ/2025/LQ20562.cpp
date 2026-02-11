#include <iostream>
using namespace std;
int a[4] = {2, 0, 2, 5};
int main()
{
    int h, w;
    cin >> h >> w;
    for(int i = 0;i < h;i++) {
        for(int j = 0;j < w;j++) {
            cout << a[(i + j) % 4];
        }
        cout << endl;
    }
    return 0;
}