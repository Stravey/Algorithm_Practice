#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Sta {
    int i,j;
    int mora;
};

int main()
{
    int c,t;
    cin >> c >> t;
    while(t--) {
        int n,m,s,k;
        cin >> n >> m >> s >> k;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;i++) {
                cin >> a[i][j];
            }
        }

        vector<vector<int>> max_m(n,vector<int>(m,-1));
        queue<Sta> q;

        for(int j = 0;j < m;j++) {
            int initial = s;
            if(a[0][j] > 0) {
                initial = a[0][j];
                if(initial > k) {
                    initial = k;
                }
            } else if(a[0][j] < 0) {
                initial -= a[0][j];
            }
            if(initial >= 0) {
                max_m[0][j] = initial;
                q.push({0,j,initial});
            }
        }

        int result = -1;
        int directions[3][2] = {{0,-1},{0,1},{1,0}};

        while(!q.empty()) {
            Sta cur = q.front();
            q.pop();
            int i = cur.i;
            int j = cur.j;
            int mora = cur.mora;
            if(i == n - 1) {
                result = max(result,mora);
                continue;
            }
            for(auto & dir: directions) {
                int ni = i + dir[0];
                int nj = j + dir[1];
                if(ni < 0 || ni >= n || nj < 0 || nj >= m) {
                    continue;
                }
                if(ni == i && nj == j) {
                    continue;
                }

                int new_m = mora;
                if(a[ni][nj] > 0) {
                    new_m += a[ni][nj];
                    if(new_m > k) {
                        new_m = k;
                    }
                } else if(a[ni][nj] < 0) {
                    new_m -= a[ni][nj];
                }

                if(new_m >= 0 && (max_m[ni][nj] < new_m)) {
                    max_m[ni][nj] = new_m;
                    q.push({ni,nj,new_m});
                }
            }
        }
        
        cout << result << endl;
    }
    return 0;
}