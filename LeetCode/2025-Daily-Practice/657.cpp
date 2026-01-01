#include <iostream>
#include <string>
using namespace std;
// 判断物体是否可以回到原点
// 分两个方向 x方向 y方向 
bool judgeCircle(string moves) {
    int x = 0;
    int y = 0;
    int n = moves.size();
    for(int i = 0;i < n;i++) {
        if(moves[i] == 'R') {
            x += 1;
        } else if(moves[i] == 'L') {
            x -= 1;
        } else if(moves[i] == 'U') {
            y -= 1;
        } else if(moves[i] == 'D') {
               y += 1; 
        }
    }
    if(x == 0 && y == 0) {
        return true;
    } else {
    return false;
}
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}