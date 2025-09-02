#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int numberOfPairs(vector<vector<int>>& points) {
    // 自定义排序   
    sort(points.begin(), points.end(), [](const vector<int>& A, const vector<int>& B) -> bool {
        if (A[0] == B[0]) {
            return A[1] >= B[1];
        }
        return A[0] <= B[0];
    });
    int ans = 0;
    int n = points.size();
        
    // 双重循环
    for(int i = 0;i < n - 1;i++) {
        int max_x = -1;
        for(int j = i + 1;j < n;j++) {
            if(points[i][1] < points[j][1]) continue;
            if(max_x == -1) {
                ans++;
                max_x = points[j][1];
            } else {
                if(points[j][1] > max_x) {
                    ans++;
                    max_x = points[j][1];
                }
            }
        }
    }
    return ans;
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}