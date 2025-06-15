#include <iostream>
#include <vector>
using namespace std;

int n,q,option,i,j,k;

int main()
{
    cin >> n >> q;
    vector<vector<int>> locker(n + 1);
    while(q--) {
        cin >> option;
        if(option == 1) {
            cin >> i >> j >> k;
            if(locker[i].size() < j + 1) {
                locker[i].resize(j + 1);
            }
            locker[i][j] = k;
        } else {
            cin >> i >> j;
            cout << locker[i][j] << endl;
        }
    }
    return 0;
}