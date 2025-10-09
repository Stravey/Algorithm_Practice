#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> laptops(n);
    for(int i = 0;i < n;i++) {
        cin >> laptops[i].first >> laptops[i].second;
    }
    sort(laptops.begin(),laptops.end());
    for(int i = 0;i < n - 1;i++) {
        if(laptops[i].second > laptops[i + 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}