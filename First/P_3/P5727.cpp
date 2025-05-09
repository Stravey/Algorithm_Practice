#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main()
{
    long long n;
    int i = 1;
    cin >> n;
    v.push_back(n);
    while(n != 1) {
        if(n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        v.push_back(n);
    }
    for(int i = v.size() - 1;i >= 0;i--) {
        cout << v[i] << " ";
    }
    return 0;
}