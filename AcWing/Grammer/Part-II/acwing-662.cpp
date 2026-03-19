#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    if(x > 0 && y > 0) {
        puts("Q1");
    } else if(x > 0 && y < 0) {
        puts("Q4");
    } else if(x < 0 && y > 0) {
        puts("Q2");
    } else if(x < 0 && y < 0) {
        puts("Q3");
    } else if(x == 0 && y != 0.0) {
        puts("Eixo Y");
    } else if(y == 0 && x != 0.0) {
        puts("Eixo X");
    } else if(x == 0.0 && y == 0.0) {
        puts("Origem");
    }
    return 0;
}