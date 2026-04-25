#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a != b && b == c) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}