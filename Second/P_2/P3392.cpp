#include <iostream>
#include <algorithm>
#include <climits>
#define max_n 55
using namespace std;

char c[max_n][max_n];

int main()
{
    int n,m,ans = 0,least = INT_MAX;
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> c[i][j];
        }
    }
    // 枚举所有行 因为所有行中至少有一行白色、一行蓝色、一行红色
    for(int i = 0;i < n - 2;i++) {
        for(int j = i + 1;j < n - 1;j++) {
            ans = 0;
            // 计算白色修改的 0 到 i 行
            for(int k = 0;k <= i;k++) {
                for(int g = 0;g < m;g++) {
                    if(c[k][g] != 'W') {
                        ans++;
                    }
                }
            }
            //计算蓝色修改的 i + 1 到 j 行
            for(int k = i + 1;k <= j;k++) {
                for(int g = 0;g < m;g++) {
                    if(c[k][g] != 'B') {
                        ans++;
                    }
                }
            }
            // 计算红色修改的 j + 1 到 n 行
            for(int k = j + 1;k < n;k++) {
                for(int g = 0;g < m;g++) {
                    if(c[k][g] != 'R') {
                        ans++;
                    }
                }
            }
            least = min(ans,least);
        }
    }
    cout << least << endl;
    return 0;
}