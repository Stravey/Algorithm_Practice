#include <iostream>
#include <cstring>
using namespace std;

int n,age,score,newScore;
string s;

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> s >> age >> score;
        newScore = 1.2 * score;
        if(newScore >= 600) {
            newScore = 600;
        }
        cout << s << " " << (age + 1) << " " << newScore << endl;
    }
    return 0;
}