#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = n; i >= 2; i--) {
      cout << i << ",";
    }
    cout << 1 << endl;
    return 0;
}