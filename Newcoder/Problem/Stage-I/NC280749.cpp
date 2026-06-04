#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x > 99) {
        puts("No\n");
    } else {
        int g = x % 10;
        int s = x / 10;
        if(g == s) {
            puts("Yes\n");
        } else {
            puts("No\n");
        }
    } 
    return 0;
}