#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 11) {
        puts("Sao Paulo");
    } else if(n == 19) {
        puts("Campinas");
    } else if(n == 21) {
        puts("Rio de Janeiro");
    } else if(n == 27) { 
        puts("Vitoria");
    } else if(n == 31) {
        puts("Belo Horizonte");
    } else if(n == 32) {
        puts("Juiz de Fora");
    } else if(n == 61) {
        puts("Brasilia");
    } else if(n == 71) {
        puts("Salvador");
    } else {
        puts("DDD nao cadastrado");
    }
    return 0; 
}