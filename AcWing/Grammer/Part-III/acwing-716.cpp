#include <iostream>
using namespace std;

int main()
{
    int maxx = 1, pos = 0;
    for(int i = 1; i <= 100; i++) {
        int x;
        cin >> x;
        if(x > maxx) {
            maxx = x;
            pos = i;
        }
    }
    cout << maxx << endl << pos;
    return 0;
}