#include <iostream>
#include <cstring>
using namespace std;

// ����һ��n * n����
// ����ÿһ����i j���б��� �˸����� ���ƥ��
// ����ܹ�ƥ���� �򽫶�Ӧ���ַ������
// ���ձ�����

int dx[8] = {0,-1,-1,-1,0,1,1,1};
int dy[8] = {-1,-1,0,1,1,1,0,-1};
int n,mark[110][110] = {0};
char a[110][110] = {0};
string s = "yizhong";

void search(int x,int y) {
    for(int i = 0;i < 8;i++) {
        int tx,ty,tmp = 1;
        for(int j = 0;j < s.size();j++) {
            tx = x + dx[i] * j;
            ty = y + dy[i] * j;
            if(a[tx][ty] != s[j]) {
                tmp = 0;
                break;
            }
        }
        if(tmp == 0) {
            continue;
        }
        for(int j = 0;j < s.size();j++) {
            mark[x + dx[i] * j][y + dy[i] * j] = 1;
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            search(i,j);
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            if(mark[i][j]) {
                cout << a[i][j];
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}