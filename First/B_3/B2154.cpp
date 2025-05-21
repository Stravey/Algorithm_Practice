#include <iostream>
using namespace std;

int main()
{
    int n,cnt = 0;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        int temp = i;
        while(temp != 0) {
            if(temp % 10 == 1) {
                cnt++;
            }
            temp /= 10;
        }
    }
    cout << cnt << endl;
    return 0;
}