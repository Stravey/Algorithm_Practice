#include <iostream>
#include <algorithm>
#include <climits>
#define max_n 55
using namespace std;

char c[max_n][max_n];

int main()
{
    int n,m,ans = 0,least = INT_MAX;
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> c[i][j];
        }
    }
    // ö�������� ��Ϊ��������������һ�а�ɫ��һ����ɫ��һ�к�ɫ
    for(int i = 0;i < n - 2;i++) {
        for(int j = i + 1;j < n - 1;j++) {
            ans = 0;
            // �����ɫ�޸ĵ� 0 �� i ��
            for(int k = 0;k <= i;k++) {
                for(int g = 0;g < m;g++) {
                    if(c[k][g] != 'W') {
                        ans++;
                    }
                }
            }
            //������ɫ�޸ĵ� i + 1 �� j ��
            for(int k = i + 1;k <= j;k++) {
                for(int g = 0;g < m;g++) {
                    if(c[k][g] != 'B') {
                        ans++;
                    }
                }
            }
            // �����ɫ�޸ĵ� j + 1 �� n ��
            for(int k = j + 1;k < n;k++) {
                for(int g = 0;g < m;g++) {
                    if(c[k][g] != 'R') {
                        ans++;
                    }
                }
            }
            least = min(ans,least);
        }
    }
    cout << least << endl;
    return 0;
}