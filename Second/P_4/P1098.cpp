#include <iostream>
#include <cstring>
using namespace std;

int p1,p2,p3;
string s;

bool check(char a,char b) {
    if(isdigit(a) && isdigit(b)) {
        return true;
    }
    if(isalpha(a) && isalpha(b)) {
        return true;
    }
    return false;
}

void expand(char a,char b) {
    // Ë³Ðò
    if(p3 == 1) {
        for(char i = a + 1;i < b;i++) {
            for(int j = 0; j < p2;j++) {
                if(p1 == 1) {
                    printf("%c",tolower(i));
                } else if(p1 == 2){
                    printf("%c",toupper(i));
                } else {
                    printf("*");
                }
            }
        }
    // ÄæÐò
    } else if(p3 == 2) {
        for(char i = b - 1;i > a;i--) {
            for(int j = 0; j < p2;j++) {
                if(p1 == 1) {
                    printf("%c",tolower(i));
                } else if(p1 == 2){
                    printf("%c",toupper(i));
                } else {
                    printf("*");
                }
            }
        }
    }
}

int main()
{
    cin >> p1 >> p2 >> p3 >> s;
    for(int i = 0;i < s.size();i++) {
        if (s[i] == '-') {
            if (i == 0 || i == s.size() - 1) {
                cout << s[i];
                continue;
            }
            char prev = s[i-1];
            char next = s[i+1];
            if (next - prev == 1) {
                continue;
            }
            else if (next > prev && check(prev, next)) {
                expand(prev, next);
                continue;
            }
        }
        cout << s[i];
    }
    return 0;
}