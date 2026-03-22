#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[100], b[100];
    fgets(a, 100, stdin);
    fgets(b, 100, stdin);
    
    // 去掉末尾回车
    if(a[strlen(a) - 1] == '\n') a[strlen(a) - 1] = 0;
    if(b[strlen(b) - 1] == '\n') b[strlen(b) - 1] = 0;
    
    for(int i = 0; a[i]; i++) {
        if(a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
    }
    
    for(int i = 0; b[i]; i++) {
        if(b[i] >= 'A' && b[i] <= 'Z') {
            b[i] += 32;
        }
    }
    
    int t = strcmp(a, b);
    if(t == 0) {
        puts("="); 
    } else if(t > 0){
        puts(">");
    } else {
        puts("<");
    }

    return 0;
}