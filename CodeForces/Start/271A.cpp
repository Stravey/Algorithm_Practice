#include <iostream>
using namespace std;

bool checkOfYear(int num) {
    int a = num / 1000; // ǧλ
    int b = (num / 100) % 10; // ��λ
    int c = (num / 10) % 10; // ʮλ
    int d = num % 10; // ��λ
    return  (a != b) && (a != c) && (a != d) 
        && (b != c) && (b != d) && (c != d);
}

int main()
{
    int y;
    cin >> y;
    int year = y + 1;
    while(true) {
        if(checkOfYear(year)) {
            cout << year << endl;
            break;
        }
        year++;
    }
    return 0;
}