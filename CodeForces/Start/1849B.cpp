#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>> monsters(n);
        for(int i = 0;i < n;i++) {
            int health;
            cin >> health;
            int remainder = health % k;
            if(remainder == 0) remainder = k;
            monsters[i] = {-remainder,i + 1};
        }

        sort(monsters.begin(),monsters.end());

        for(int i = 0;i < n;i++) {
            cout << monsters[i].second << " ";
        }
        
        cout << "\n";
    }
    return 0;
}