#include <iostream>
#include <cstring>
#include <algorithm>
#define max_n 105
using namespace std;

int R,C,K,ans = 0;
char c[max_n][max_n];

int main()
{
    cin >> R >> C >> K;
    for(int i = 1;i <= R;i++) {
        for(int j = 1;j <= C;j++) {
            cin >> c[i][j];
        }
    }
    bool flag = true;
    // ∫·œÚ
    for(int i = 1;i <= R;i++) {
        for(int j = 1;j <= C;j++) {
            flag = true;
            for(int t = 0;t < K;t++) {
                if(c[i + t][j] != '.') {
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                ans++;
            }
        }
    }
    // ◊›œÚ
    for(int i = 1;i <= R;i++) {
        for(int j = 1;j <= C;j++) {
            flag = true;
            for(int t = 0;t < K;t++) {
                if(c[i][j + t] != '.') {
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                ans++;
            }
        }
    }
    if(K == 1) {
        cout << ans / 2 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}