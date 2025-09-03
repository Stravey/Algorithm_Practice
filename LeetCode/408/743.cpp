#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

/// ��Դ���·���㷨 ����Dijkstra�㷨
class Solution {
    // ͼ�ڽӾ�����
    int g[110][110];
    // �ж�ͼ�Ƿ񱻷��ʹ�
    bool visited[110];
    // ��¼����
    int dist[110];
public:
    void Dijkstra(int n,int k) {
        dist[k] = 0;
        for(int i = 1;i <= n;i++) {
            int t = -1; // ��ǰ����и�С�Ķ��� ����������
            for(int j = 1;j <= n;j++) {
                if(visited[j] == false && (t == -1 || dist[j] < dist[t])) {
                    t = j;
                }
            }
            visited[t] = true;
            for(int j = 1;j <= n;j++) {
                if(dist[j] > dist[t] + g[t][j]) {
                    dist[j] = dist[t] + g[t][j];
                }
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // ��ʼ�� g �ڽӾ���
        memset(g,0x3f,sizeof g);
        // ��ʼ�� visited ���� 
        memset(visited,false,sizeof visited);
        // ��ʼ�� dist ���� 
        memset(dist,0x3f,sizeof dist);

        int m = times.size();
        for(int i = 0;i < m;i++) {
            int a = times[i][0];
            int b = times[i][1];
            int c = times[i][2];
            g[a][b] = c;
        }
        // ִ�е�Դ���·���㷨
        Dijkstra(n,k);

        int ans = -1;
        for(int i = 1;i <= n;i++) {
            if(dist[i] == 0x3f3f3f3f) {
                return -1;
            } else {
                // �������ֵ
                ans = max(ans,dist[i]);
            }
        }
        return ans;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}