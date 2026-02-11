#include <iostream>
using namespace std;
int main()
{
    const int N = 20250412;
    int cnt = 0;
    for(int i = 1;i <= N;i++) {
        int cnt0 = 0, cnt2 = 0, cnt5 = 0;
        int n = i;
        while(n) {
            int digit = n % 10;
            if(digit == 0) {
                cnt0++;
            } else if(digit == 2) {
                cnt2++;
            } else if(digit == 5) {
                cnt5++;
            }
            n /= 10;
        }
        if(cnt0 >= 1 && cnt2 >= 2 && cnt5 >= 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}