#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double x = (a * 2 + b * 3 + c * 4 + d) / 10.0;
    cout << "Media: " << fixed << setprecision(1) << x << endl;
    if(x >= 7.0) {
        puts("Aluno aprovado.");
    } else if(x < 5.0) {
        puts("Aluno reprovado.");
    } else {
        puts("Aluno em exame.");
        double y;
        cin >> y;
        cout << "Nota do exame: " << fixed <<setprecision(1) << y << endl;
        double z = (x + y) / 2.0;  
        if(z < 5.0) {
            puts("Aluno reprovado.");
        } else {
            puts("Aluno aprovado.");
        }
        cout << "Media final: " << fixed << setprecision(1) << z << endl;
    }
    return 0;
}