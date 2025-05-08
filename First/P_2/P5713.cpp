#include <iostream>

using namespace std;
int n;
int local,luogu;

int main()
{   
    cin >> n;
    local = 5 * n;
    luogu = 11 + 3 *  n;
    if(local > luogu) {
        cout << "Luogu";
    } else {
        cout << "Local";
    }
    return 0;
}