#include <iostream>
#include <cstring>
#define max_n 1024
using namespace std;

int n,x,ans;

struct student {
    string name;
    int chinese,math,english;
};
struct  student a[max_n];

bool check(int x,int y,int z) {
    return x <= y + z && y <= z + x;
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].name >> a[i].chinese >> a[i].math >> a[i].english;
    }
    for(int i = 1;i <= n;i++) {
        for(int j = i + 1;j <= n;j++) {
            if(check(a[i].chinese,a[j].chinese,5) 
                && check(a[i].math,a[j].math,5)
                && check(a[i].english,a[j].english,5)
                && check(a[i].chinese + a[i].math + a[i].english,a[j].chinese + a[j].math + a[j].english,10)) {
                    cout << a[i].name << " " << a[j].name << endl;
                }
        }
    }
    return 0;
}