#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// 队列模拟排队买票
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        int n = tickets.size();
        queue<int> q;
        for(int i = 0;i < n;i++) {
            q.push(i);
        }
        while(!q.empty()) {
            int person = q.front();
            q.pop();
            tickets[person]--;
            ans++;
            if(tickets[person] > 0) {
                q.push(person);
            } else if(person == k) {
                return ans;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}