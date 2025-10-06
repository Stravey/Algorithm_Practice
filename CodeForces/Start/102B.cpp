#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string n;
    cin >> n;
    if(n.length() == 1) {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    long long sum = 0;
    for(char c : n) {
        sum += c - '0';
    }
    cnt++;
    while(sum >= 10) {
        long long new_sum = 0;
        while(sum > 0) {
            new_sum += sum % 10;
            sum /= 10;
        }
        sum = new_sum;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}