#include <iostream>
using namespace std;

// k ����
// ans ���
// num �� k ���� num �����
// days ��ʣ����
int k,ans,num,days;

int main()
{
    cin >> k;
    num = days = 1;
    for(int i = 1;i <= k;i++) {
        ans += num;
        days--;
        if(days == 0) {
            num++;
            days = num;
        }
    }
    cout << ans;
    return 0;
}