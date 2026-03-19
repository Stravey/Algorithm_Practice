#include <bits/stdc++.h>

using namespace std;

const double a_w = 3.5, b_w = 7.5;

int main()
{
    double a, b;
    cin >> a >> b;
    
    double avg = (a * a_w + b * b_w) / (a_w + b_w); 
    cout << "MEDIA = " << fixed << setprecision(5) << avg << endl;
    
    return 0;
}
