#include <iostream>
using namespace std;

int main() {
    int t = 0;
    char ch;
    while ((ch = getchar()) != '@') {
        if (ch == '(') {
            t++;
        } else if (ch == ')') {
            t--;
            if (t < 0) break; // �����Ŷ��������ţ�ֱ���˳�
        }
    }
    cout << (t == 0 ? "YES" : "NO") << endl;
    return 0;
}