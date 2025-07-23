// ����˼·
// ��������Ҫ�߾��� ���·���ֻ�ܹ�40%�Ĳ��Ե� �� 40��
/* #include <iostream>
#include <algorithm>
using namespace std;

struct people {
    int left;
    int right;
}ps[10005];

bool compare(people p1,people p2) {
    return p1.left * p1.right < p2.left * p2.right;
}

int main()
{
    long long n,s = 1,ans = 0;
    cin >> n;
    for(int i = 0;i <= n;i++) {
        cin >> ps[i].left >> ps[i].right;
    }
    sort(ps,ps + n + 1,compare);
    for(int i = 0;i < n;i++) {
        s *= ps[i].left;
    }
    ans = s / ps[n].right;
    if(ans == 0) {
        ans = 1;
    }
    cout << ans << endl;
    return 0;
} */


// �߾���

#include <iostream>
#include <algorithm>
using namespace std;

struct people {
    int left;
    int right;
}ps[10005];
int s[1000000] = {1},slen = 1,ans[1000000],anslen = 0;

void mul(int n);
void div(int n);
void print();

bool compare(people p1,people p2) {
    return p1.left * p1.right < p2.left * p2.right;
}
// �߾��ȳ˷�
void mul(int n) {
    int tmp = 0;
    for(int i = 0;i < slen;i++) {
        s[i] *= n;
    }
    for(int i = 0;i < slen;i++) {
        tmp = tmp + s[i];
        s[i] = tmp % 10;
        tmp /= 10;
    }
    while(tmp != 0) {
        s[slen] = tmp % 10;
        slen++;
        tmp /= 10;
    }
    return;
}
// �߾��ȳ���
void div(int n) {
    int tmp = 0;
    anslen = slen;
    for(int i = slen - 1;i >= 0;i--) {
        tmp = tmp * 10 + s[i];
        ans[i] = tmp / n;
        tmp %= n;
    }
    while(anslen > 1 && ans[anslen - 1] == 0) {
        anslen--;
    }
}
// ���
void print() {
    for(int i = anslen - 1;i >= 0;i--) {
        cout << ans[i];
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i <= n;i++) {
        cin >> ps[i].left >> ps[i].right;
    }
    sort(ps + 1,ps + n + 1,compare);
    if(n == 0) {
        cout << 0;
        return 0;
    }
    for(int i = 0;i < n;i++) {
        mul(ps[i].left);
    }
    div(ps[n].right);
    print();
    return 0;
}