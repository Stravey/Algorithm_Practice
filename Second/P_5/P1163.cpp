#include <iostream>
using namespace std;

int main()
{
    int loan,pay,month;
    double left = 0,right = 10,mid,t;
    cin >> loan >> pay >> month;
    while(left < right) {
        mid = (left + right) / 2;
        if(right - left < 0.0001) {
            break;
        }
        t = loan;
        for(int i = 0;i < month;i++) {
            t = t * (1 + mid) - pay;
        }
        if(t > 0) {
            right = mid;
        } else if(t < 0) {
            left = mid;
        } else {
            printf("%.1f",mid * 100);
            return 0;
        }
    }
    printf("%.1f",mid * 100);
    return 0;
}