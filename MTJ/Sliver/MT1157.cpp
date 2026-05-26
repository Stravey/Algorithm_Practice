#include<bits/stdc++.h> 

using namespace std;

int a[4][4], b[4][4];

int main( )
{
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> b[i][j];
        }
    }
    bool flag = true;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(a[i][j] != b[i][j]) {
                flag = false;
                break;
            }
        }
    }
    if(flag) {
        puts("YES");
    } else{
        puts("NO");
    }
    return 0;
}