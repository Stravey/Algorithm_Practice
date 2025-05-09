#include<iostream>
using namespace std;

int main() 
{
    int ans = 0;
    double s;
    cin >> s;
    double sum = 0;
    for(double i = 2;i > 0;i *= 0.98) {
        sum += i;
        ans++;
        if(sum >= s) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}