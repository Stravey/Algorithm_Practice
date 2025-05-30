#include <iostream>
#include <cstring>
using namespace std;

struct student {
    string name;
    int chinese,math,english;
}a,ans;

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a.name >> a.chinese >> a.math >> a.english;
        if((a.chinese + a.math + a.english) > (ans.chinese + ans.math + ans.english)) {
            ans = a;
        }
    }
    cout << ans.name << " " << ans.chinese << " " << ans.math << " " << ans.english << endl;
    return 0;
}