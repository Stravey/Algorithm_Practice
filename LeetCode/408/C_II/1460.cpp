#include <bits/stdc++.h>
using namespace std;
// ��һ:������������ ͳ��Ԫ�س��ֵĴ��� �������� �򷵻�false
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a[1005],b[1005];
        memset(a,sizeof(a),0);
        memset(b,sizeof(b),0);
        int n = target.size();
        for(int i = 0;i < n;i++) {
            a[target[i]]++;
            b[arr[i]]++;
        }
        for(int i = 0;i <= 1000;i++) {
            if(a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
};
// ����:����һ������ target����++ arr����-- ����Ԫ���Ƿ�Ϊ0 
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a[1005];
        memset(a,sizeof(a),0);
        int n = target.size();
        for(int i = 0;i < n;i++) {
            a[target[i]]++;
            a[arr[i]]--;
        }
        for(int i = 0;i <= 1000;i++) {
            if(a[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    cout << 1 << endl;
}