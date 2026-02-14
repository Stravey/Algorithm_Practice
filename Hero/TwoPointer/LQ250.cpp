#include <iostream>
#include <cstring>
using namespace std;
char s[105];
int main()
{
    cin.getline(s, 101, '\n');
    int i = 0;
    int j = strlen(s) - 1;
    while(i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
    return 0;
}