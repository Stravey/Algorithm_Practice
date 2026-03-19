#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if(s1 == "vertebrado") {
        if(s2 == "ave") {
            if(s3 == "carnivoro") {
                puts("aguia");
            } else if(s3 == "onivoro") {
                puts("pomba");
            }
        } else if(s2 == "mamifero") {
            if(s3 == "onivoro") {
                puts("homem");
            } else if(s3 == "herbivoro") {
                puts("vaca");
            }
        }
    } else if(s1 == "invertebrado") {
        if(s2 == "inseto") {
            if(s3 == "hematofago") {
                puts("pulga");
            } else if(s3 == "herbivoro") {
                puts("lagarta");
            }
        } else if(s2 == "anelideo") {
            if(s3 == "hematofago") {
                puts("sanguessuga");
            } else if(s3 == "onivoro") {
                puts("minhoca");
            }
        }
    } 
    return 0;
}