#include <iostream>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;
int T = 1;
struct Point{
    int x; // 横坐标
    int y; // 纵坐标
};
double distance(const Point& a,const Point& b) {
    return sqrt(1.0 * (a.x - b.x) * (a.x - b.x) + 1.0 * (a.y - b.y) * (a.y - b.y));
}
// 选点问题 欧几里得问题
void solve() {
    ll n;
    cin >> n;
    vector<Point> points(n);
    for(int i = 0;i < n;i++) {
        cin >> points[i].x >> points[i].y;
    }
    double max_distance = -1;
    Point p1,p2;
    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            double dist = distance(points[i],points[j]);
            if(dist > max_distance) {
                max_distance = dist;
                p1 = points[i];
                p2 = points[j];
            }
        }
    }
    cout << p1.x << " " << p1.y << " " << p2.x << " " << p2.y << endl;
}
signed main()
{
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
