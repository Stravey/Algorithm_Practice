#include <iostream>
using namespace std;

int l,cnt = 0,sum = 0;

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2;i * i <= num;i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> l;
    for(int i = 1;i <= l;i++) {
        if(isPrime(i)) {
            sum += i;
            if(sum <= l) {
                cout << i << endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
