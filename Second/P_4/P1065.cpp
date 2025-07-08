#include <iostream>
using namespace std;
// �����ṹ��
struct device{
    int number;
    int time;
}d[20][20];
int n,m,a[400],d_step[20],d_last[20];
int m_time[20][8000] = {0};

// �ж�
bool check(int begin,int end,int num) {
    for(int i = begin;i <= end;i++) {
        if(m_time[num][i] == 1) {
            return false;
        }
    }
    return true;
}

// ��������
void init() {
    cin >> m >> n;
    for(int i = 0;i < m * n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin >> d[i][j].number;
        }
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin >> d[i][j].time;
        }
    }
    for(int i = 1;i <= n;i++) {
        d_step[i] = 1;
    }
}

// ��Ҫ�߼�
void solve() {
    for(int i = 0; i < m * n;i++) {
        int device = a[i];
        int step = d_step[device]++;
        int num = d[device][step].number;
        int t = d[device][step].time;
        int begin = d_last[device];
        while(true) {
            if(check(begin + 1,begin + t,num)) {
                // Ѱ��һ����ʹ�õ�ʱ���
                for(int j = begin + 1;j <= begin + t;j++) {
                    m_time[num][j] = 1;
                }
                d_last[device] = begin + t;
                break;
            }
            begin++;
        }
    }
}

int main()
{
    init();
    solve();
    int max = d_last[1];
    for(int i = 1;i <= n;i++) {
        if(max < d_last[i]) {
            max = d_last[i];
        }
    }
    cout << max;
    return 0;
}