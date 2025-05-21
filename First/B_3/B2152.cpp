#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    long long n;
    vector<int> v(n);
    cin >> n;
    for(int i = 1;i <= n;i++) {
        long long temp = i;
        while(temp > 1) {
            temp = temp % 10;
            v.push_back(temp);
        }
        temp /= 10;
    }
    for(int i = 1;i < v.size();i++) {
        cout << v[i] << " ";
    }
    return 0;
}