#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[11], substr[4];
    
    while(scanf("%s %s", &str, &substr) != EOF) {
        int cnt = str[0], res = 0;
        for(int i = 0; i < strlen(str); i++) {
            if(str[i] > cnt) {
                cnt = str[i];
                res = i;
            } else {
                continue;
            }
        }
        for(int i = 0; i <= res; i++) {
            cout << str[i];
        }
        for(int i = 0; i < strlen(substr); i++) {
            cout << substr[i];
        }
        for(int i = res + 1; i < strlen(str); i++) {
            cout << str[i];
        }
        puts(" ");
    }
    
    return 0;
}