#include <iostream>
using namespace std;
// �����������������λ��
int main()
{
    int position[4] = {0};
    for(int i = 1;i <= 3;i++) {
        int num;
        cin >> num;
        position[num] = i;
    }
    for(int i = 1;i <= 3;i++) {
        cout << position[i] << " ";
    }
    return 0;
}