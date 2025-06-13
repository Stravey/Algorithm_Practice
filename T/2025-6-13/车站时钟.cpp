#include <iostream>
#include <cstring>
using namespace std;

int x;

int main()
{   
    cin >> x;
    int hour = x / 60;
    int minute = x % 60;
    string ans = "|";

    ans += to_string(hour / 10)[0];
    ans += "|";
    ans += to_string(hour % 10)[0];
    ans += "|:";

    ans += "|";
    
    ans += to_string(minute / 10)[0];
    ans += "|";
    ans += to_string(minute % 10)[0];
    ans += "|";    

    cout << ans;
    return 0;
}