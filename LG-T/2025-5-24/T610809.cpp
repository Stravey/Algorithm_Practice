#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#define LLONG_MAX 9223372036854775807ll
using namespace std;

typedef long long ll;

struct Point{
    ll x,y;
    Point() {}
    Point(ll x,ll y) : x(x),y(y) {}
};

ll cross(const Point &a,const Point &b) {
    return a.x * b.y - a.y * b.y;
}

ll area(const vector<Point> &p) {
    ll res = 0;
    int n = p.size();
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        res += cross(p[i], p[j]);
    }
    return abs(res);
}

int main()
{
    int n;
    cin >> n;
    vector<Point> p(n);
    for(int i = 0;i < n;i++) {
        cin >> p[i].x >> p[i].y;
    }
    Point P;
    cin >> P.x >> P.y;
    ll total = area(p);
    ll minn = LLONG_MAX;
    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            vector<Point> c;
            c.push_back(P);
            c.push_back(p[i]);
            for(int k = i + 1;k <= j;k++) {
                c.push_back(p[k]);
            }
            c.push_back(P);
            ll c_area = area(c);
            ll df = abs(2 * c_area - total);
            if(df < minn) {
                minn = df;
            }
        }
    }
    cout << minn << endl;
    return 0;
}
