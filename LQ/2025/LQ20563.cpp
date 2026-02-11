#include <iostream>
using namespace std;
int main()
{
    int w, h, v;
    cin >> w >> h >> v;
    for(int i = 0;i < h;i++) {
        for(int j = 0;j < w;j++) {
            cout << "Q";
        }
        cout << endl;
    }
    for(int i = 0;i < w;i++) {
        for(int j = 0;j < (w + v);j++) {
            cout << "Q";
        }
        cout << endl;
    }
    return 0;
}