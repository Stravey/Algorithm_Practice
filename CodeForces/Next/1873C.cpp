#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        char grid[10][11];
        int ans = 0;
        for(int i = 0;i < 10;i++) {
            cin >> grid[i];
        }
        for(int i = 0;i < 10;i++) {
            for(int j = 0;j < 10;j++) {
                if(grid[i][j] == 'X') {
                    if(i >= 4 && i <= 5 && j >= 4 && j <= 5) {
                        ans += 5;
                    } else if(i >= 3 && i <= 6 && j >= 3 && j <= 6) {
                        ans += 4;
                    } else if(i >= 2 && i <= 7 && j >= 2 && j <= 7) {
                        ans += 3;
                    } else if(i >= 1 && i <= 8 && j >= 1 && j <= 8) {
                        ans += 2;
                    } else {
                        ans += 1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}