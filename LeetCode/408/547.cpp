#include <bits/stdc++.h>
using namespace std;
// ���鼯
// 547. ʡ������ 
// https://leetcode.cn/problems/number-of-provinces/description/?envType=problem-list-v2&envId=hEQM0XeA
class Solution {
    int root[205];
public:
    int find(int x) {
        if(x == root[x]) {
            return x;
        }
        return root[x] = find(root[x]);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        // ��ʼ��root����
        for(int i = 0;i < n;i++) {
            root[i] = i;
        }
        // �����ڽӾ���
        for(int i = 0;i < n;i++) {
            for(int j = i + 1;j < n;j++) {
                if(isConnected[i][j]) {
                    // �����󶥵�ĸ�
                    int x = find(i);
                    // �����Ҷ���ĸ�
                    int y = find(j);
                    // �������� ���кϲ� �ı����ָ��
                    if(x != y) {
                        root[x] = y;
                    }
                }
            }
        }
        int ans = 0;
        // ��������ҵ��˸� ��Ϊһ�� ��һ��ʡ
        for(int i = 0;i < n;i++) {
            if(root[i] == i) {
                ans++;
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