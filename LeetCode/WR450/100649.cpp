#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// ����ÿ�����ֵ���λ�ͣ���������ÿһλ���ĺͣ�
static int sum_d(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// �ȽϺ��� ������λ��֮����бȽ�
static bool compare(int a,int b) {
    int sumA = sum_d(a);
    int sumB = sum_d(b);
    if (sumA == sumB) {
        return a < b;
    }
    return sumA < sumB;
}

// ��С��������
int minSwaps(vector<int>& nums) {
    // ԭ��������
    vector<int> o = nums;
    // ����������
    vector<int> v = nums;
    // �������������
    sort(v.begin(), v.end(), compare);
    // ��ϣ��value��¼ԭ������ÿ��ֵ���ֵ���������λ��
    unordered_map<int,vector<int>> value;
    for (int i = 0; i < o.size(); ++i) {
        value[o[i]].push_back(i);
    }
    vector<bool> visited(o.size(), false);
    int swaps = 0;
    for (int i = 0; i < o.size(); ++i) {
        if (visited[i] ||o[i] == v[i]) {
            continue;
        }
        int j = i;
        int size = 0;
        while(!visited[j]) {
            visited[j] = true;
            int target = v[j];
            int pos = value[target].back();
            value[target].pop_back();
            j = pos;
            size++;
        }
        if(size > 0) {
            swaps += (size - 1);
        }
    }
    return swaps;
}

int main()
{
    
    return 0;
}