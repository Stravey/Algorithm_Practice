#include <iostream>
#include <vector>
using namespace std;

int n,m,tmp;

int main() 
{
    vector<int> a(n + 1);
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 1;i <= m;i++) {
        cin >> tmp;
        cout << a[tmp] << endl;
    }
    return 0;
}