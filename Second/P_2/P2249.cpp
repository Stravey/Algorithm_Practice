#include <iostream>
#include <algorithm>
#define N 1000005
using namespace std;

int a[N],m,n; // ���飬ѯ�ʴ��������ָ���
int t; // ���ҵ�����

// ���ֲ���
int find(int x) {
    int l = 1;
    int r = n + 1;
    while(l < r) {
        int mid = l + (r - l) / 2;
        if(a[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    if(a[l] == x) {
        return l;
    } else {
        return -1;
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < m;i++) {
        cin >> t;
        cout << find(t) << " ";
    }
    return 0;
}