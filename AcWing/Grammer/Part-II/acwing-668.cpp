#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d < b) c -= 1, d += 60;
    if(c < a) c += 24;
    if(c - a == 0 && d - b == 0) c += 24;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a, d - b);
    return 0;
}