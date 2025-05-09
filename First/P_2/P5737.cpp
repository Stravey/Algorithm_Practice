#include <iostream>
#include <vector>
using namespace std;

int x,y,k = 0;
vector<int> v;

int main()
{
    cin >> x >> y;
    for(int i = x;i <= y;i++) {
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            k++;
            v.push_back(i);
        }
    }
    cout << k << endl;
    for(int i = 0;i < v.size();i++) {
        cout << v[i] << " ";
    }
    return 0;
}