#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int n;

struct student{
    string s;
    int y,m,d,n; // Äê ÔÂ ÈÕ ±àºÅ
}a[105];

bool compare(student a,student b) {
    if(a.y < b.y) {
        return 1;
    } 
    if(a.y > b.y) {
        return 0;
    }
    if(a.y == b.y) {
        if(a.m < b.m) {
            return 1;
        }
        if(a.m > b.m) {
            return 0;
        }
        if(a.m == b.m) {
            if(a.d < b.d) {
                return 1;
            }
            if(a.d > b.d) {
                return 0;;
            }
            if(a.d == b.d) {
                if(a.n > b.n) {
                    return 1;
                } else if(a.n < b.n) {
                    return 0;
                } else {
                    return a.n > b.n;
                }
            }
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i].s >> a[i].y >> a[i].m >> a[i].d;
        a[i].n = i;
    }
    sort(a + 1,a + n + 1,compare);
    for(int i = 1;i <= n;i++) {
        cout << a[i].s << endl;
    }
    return 0;
}