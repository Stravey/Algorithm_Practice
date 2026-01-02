#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// 圆形 0  方形 1
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int i = 0,cnt = 0;
        queue<int> q;
        for(int x : students) {
            q.push(x);
        }
        while(!q.empty() && cnt < q.size()) {
            if(q.front() == sandwiches[i]) {
                // 拿到出队 cnt不变
                q.pop();
                ++i; 
                cnt = 0;
            } else {
                // 不喜欢 之后出队 cnt++
                q.push(q.front());
                q.pop();
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    return 0;
}