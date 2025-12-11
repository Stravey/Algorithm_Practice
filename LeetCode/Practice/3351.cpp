#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        vector<int> maxRow(n + 1);
        vector<int> minRow(n + 1,n + 1);
        vector<int> maxCol(n + 1);
        vector<int> minCol(n + 1,n + 1);

        for(auto & a : buildings) {
            int x = a[0],y = a[1];
            maxRow[y] = max(maxRow[y],x);
            minRow[y] = min(minRow[y],x);
            maxCol[x] = max(maxCol[x],y);
            minCol[x] = min(minCol[x],y); 
        }

        int ans = 0;
        for(auto & a : buildings) {
            int x = a[0],y = a[1];
            if(x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x]) {
                ans++;
            }
        }

        return ans;
    }
};
int main()
{
    return 0;
}