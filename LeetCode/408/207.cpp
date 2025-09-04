#include <iostream>
#include <vector>
using namespace std;
// ����ģ�����
class Solution {
    int g[2005][2005];
    int q[2005];
    int in_degree[2005];
    int front = 0;
    int rear = 0;
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // ͳ�����
        for(int i = 0;i < prerequisites.size();i++) {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];
            g[b][a] = 1;
            in_degree[a]++;
        }
        // Ѱ�����Ϊ0�ĵ� ����������
        for(int i = 0;i < numCourses;i++) {
            if(in_degree[i] == 0) {
                q[rear++] = i;
            }
        }
        // ��������
        while(front < rear) {
            int tmp = q[front++];
            for(int i = 0;i < numCourses;i++) {
                if(g[tmp][i] == 1) {
                    in_degree[i]--;
                    if(in_degree[i] == 0) {
                        q[rear++] = i;
                    }
                }
            }
        }
        // һ�α��� ���������Ϊ0�ĵ�
        for(int i = 0;i < numCourses;i++) {
            if(in_degree[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}