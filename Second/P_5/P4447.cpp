#include <iostream>
#include <algorithm>
using namespace std;

// ����֩��ֽ��
// ˼·��
// 1.��С��������
// 2.�������еķ��飬��û����������Բ����λ��
// 3.����ж���ɲ����λ�ã�ѡ�񳤶���С����в���
// 4.���û�пɲ����λ�ã��½�һ����
// 5.�ظ�������̣�ֱ�����������ݲ���

long long mark = 0;

struct team{
    int num;
    int sl;
}ts[100005];

// ����
void insert(int k) {
    long long find = 0,flag = 0,tnum = 100005;
    for(int i = 0;i < mark;i++) {
        if(ts[i].sl == k - 1) {
            if(ts[i].num < tnum) {
                flag = i;
                find = 1;
                tnum = ts[i].num;
            }
        }
    }
    if(find == 1) {
        ts[flag].sl = k;
        ts[flag].num++;
    } else {
        ts[mark].sl = k;
        ts[mark].num = 1;
        mark++;
    }
}

int main()
{
    long long n,a[100005];
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = 0;i < n;i++) {
        insert(a[i]);
    }
    long long ans = ts[0].num;
    for(int i = 1;i < mark;i++) {
        if(ans > ts[i].num) {
            ans = ts[i].num;
        }
    }
    cout << ans << endl;
    return 0;
}