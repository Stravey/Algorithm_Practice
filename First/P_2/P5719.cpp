#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int n,k,a_cnt = 0,b_cnt = 0;
double a_avg,b_avg,a_sum,b_sum;

int main()
{
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        if(i % k == 0) {
            a_sum += i;
            a_cnt++;
        } else {
            b_sum += i;
            b_cnt++;
        }
    }
    a_avg = a_sum / a_cnt;
    b_avg = b_sum / b_cnt;
    cout << fixed << setprecision(1) << a_avg << " ";
    cout << fixed << setprecision(1) << b_avg;
    return 0;
}