// P12132 [���ű� 2025 ʡ B] �ɷֽ��������
#include <iostream>
using namespace std;

int main()
{
    int n,ans;
    cin >> n;
    ans = n;
    for(int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if(x == 1) {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}