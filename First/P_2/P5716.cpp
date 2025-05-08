#include <iostream>
using namespace std;

int year,month;

bool is_LeapYear(int n)
{
    if((n % 100 != 0 && n % 4 == 0) || n % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    cin >> year >> month;
    if(is_LeapYear(year)) {
        if(month == 2) {
            cout << 29;
        } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << 31;
        } else {
            cout << 30;
        }
    } else {
        if(month == 2) {
            cout << 28;
        } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << 31;
        } else {
            cout << 30;
        }
    }
    return 0;
}