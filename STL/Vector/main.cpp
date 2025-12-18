#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(10);
    for(int i = 0;i < 10;i++) {
        a[i] = i;
    }
    for(int i = 0;i < 10;i++) {
        cout << a[i] << endl;
    }
    return 0;
}