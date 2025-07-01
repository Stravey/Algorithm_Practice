#include <iostream>
using namespace std;

int m[15][15],dx[4] = {-1,0,1,0},dy[4] = {0,1,0,-1},ans = 0;
struct entity{
    int x;
    int y;
    int f; // 方向 0北 1东 2南 3西
}cow,farmer;

void move() {
    int fx = farmer.x + dx[farmer.f];
    int fy = farmer.y + dy[farmer.f];
    int cx = cow.x + dx[cow.f];
    int cy = cow.y + dy[cow.f];
    if(m[fx][fy]) {
        farmer.x = fx;
        farmer.y = fy;
    } else {
        farmer.f = (farmer.f + 1) % 4;
    }
    if(m[cx][cy]) {
        cow.x = cx;
        cow.y = cy;
    } else {
        cow.f = (cow.f + 1) % 4;
    }
}

int main()
{
    char tmp;
    bool a[11][11][4][11][11][4] = {0};
    for(int i = 1;i <= 10;i++) {
        for(int j = 1;j <= 10;j++) {
            cin >> tmp;
            if(tmp == '*') continue;
            m[i][j] = 1;
            if(tmp == 'C') {
                cow.x = i;
                cow.y = j;
                cow.f = 0;
            }
            if(tmp == 'F') {
                farmer.x = i;
                farmer.y = j;
                farmer.f = 0;
            }
        }
    }
    while(farmer.x != cow.x || farmer.y != cow.y) {
        ans++;
        if(a[farmer.x][farmer.y][farmer.f][cow.x][cow.y][cow.f] == 1) {
            cout << 0 << endl;
            return 0;
        }
        a[farmer.x][farmer.y][farmer.f][cow.x][cow.y][cow.f] = 1;
        move();
    }
    cout << ans << endl;
    return 0;
}