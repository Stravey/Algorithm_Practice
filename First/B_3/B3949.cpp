#include <iostream>
#include <cmath>
using namespace std;

int n,k,cnt = 0;

int main()
{
    cin >> n >> k;
    for(int i = 1;i < pow(10,n);i++) {
        int temp = i;
        int sum = 0;
        bool valid =true;
        while(temp > 0) {
            int digit = temp % 10;
            sum += digit;
            if(sum > k) {
                valid = false;
                break;
            }
            temp /= 10;
        }
        if(valid) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

