#include <iostream>
#include <algorithm>
#define max_n 305
using namespace std;

int n;

struct student {
    int id;
    int chinese;
    int total;
}a[max_n];

int cmp(student a,student b) {
    if(a.total != b.total) {
        return a.total > b.total;
    }
    if(a.chinese != b.chinese) {
        return a.chinese > b.chinese;
    } else {
        return a.id < b.id;
    }
}

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++) {
        int math,english;
        cin >> a[i].chinese >> math >> english;
        a[i].total = a[i].chinese + math + english;
        a[i].id = i + 1;
    }
    sort(a,a + n,cmp);
    for(int i = 0;i < 5;i++) {
        cout << a[i].id << " " << a[i].total << endl;
    }
    return 0;
}