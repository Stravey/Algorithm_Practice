#include <bits/stdc++.h>

using namespace std;

int main()
{
    int id, time;
    double salary;
    cin >> id >> time >> salary;
    cout << "NUMBER = " << id << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << (time * salary) << endl; 
    return 0;
}
