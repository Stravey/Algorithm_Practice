#include <iostream>
#include <cstring>
using namespace std;
const int max_n = 1e6 + 5;
int n,m,x,y;
struct node {
    int head;
    string name;
}a[max_n];

int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        cin >> a[i].head >> a[i].name;
    }
    int now = 0;
    for(int i = 1;i <= m;i++) {
        cin >> x >> y;
        if(a[now].head == 0 && x == 0) {  //�泯������
            now = (now + n - y) % n;
        } else if(a[now].head == 0 && x == 1) {  //�泯������
            now = (now + y) % n;
        } else if(a[now].head == 1 && x == 0) {  //�泯������
            now = (now + y) % n;
        } else if(a[now].head == 1 && x == 1) {  //�泯������
            now = (now + n - y) % n;
        }
    }
    cout << a[now].name << endl;
    return 0;
}