#include <iostream>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    while(n--) {
        int x;
        cin >> x;
        if(x == 1) {
            if(v < 10) {
                v += 1;
            }
        }
        if(x == 0) {
            if(v > 0) {
                v -= 1;
            } 
        }
    }
    cout << v << endl;
    return 0;
}