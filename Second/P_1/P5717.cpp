#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a[3],max_s,sum_squ,max_squ;

int main()
{
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a + 3);
    if(a[0] + a[1] <= a[2] || a[1] + a[2] <= a[0] || a[0] + a[2] <= a[1]) {
        cout << "Not triangle" << endl;
        return 0;
    } 
    if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
        cout << "Right triangle" << endl;
    } else if(a[0] * a[0] + a[1] * a[1] > a[2] * a[2]) {
        cout << "Acute triangle" << endl;
    } else if(a[0] * a[0] + a[1] * a[1] < a[2] * a[2]) {
        cout << "Obtuse triangle" << endl;
    } 
    if(a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) {
        cout << "Isosceles triangle" << endl;
    } 
    if(a[0] == a[1] && a[1] == a[2]) {
        cout << "Equilateral triangle" << endl;
    }
    return 0;
}