#include <iostream>
#include <string>
using namespace std;
// �ж������Ƿ���Իص�ԭ��
// ���������� x���� y���� 
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