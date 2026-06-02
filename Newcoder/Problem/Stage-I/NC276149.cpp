#include <iostream>
using namespace std;

int main()
{
    int z;
    cin >> z;
    if(z <= 2) {
        puts("NO\n");
        return 0;
    }
    puts("YES");
    int x = 1;
    int y = z - x;
    cout << x << " " << y << endl;
    return 0;
}