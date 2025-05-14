#include <iostream>
using namespace std;

int n,now = 1,count = 0;

bool check(int x) {
    for(int i = 2;(i * i) <= x;i++) {
        if(x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cin >> n;
    while(count < n) {
        now++;
        if(check(now)) {
            count++;
        }
    }
    cout << now << endl;
    return 0;
}