#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n, 0);
        stack<int> stk; // 存放函数id
        int prevTime = 0; // 上一个事件的时间点（或上一个开始/结束的时间戳）
        
        for (const string& log : logs) {
            // 解析日志
            int firstColon = log.find(':');
            int secondColon = log.find(':', firstColon + 1);
            int id = stoi(log.substr(0, firstColon));
            string type = log.substr(firstColon + 1, secondColon - firstColon - 1);
            int time = stoi(log.substr(secondColon + 1));
            
            if (type == "start") {
                if (!stk.empty()) {
                    // 栈顶函数从 prevTime 运行到 time，这段时间计入栈顶函数的独占时间
                    res[stk.top()] += time - prevTime;
                }
                stk.push(id);
                prevTime = time;
            } else { // type == "end"
                // 当前栈顶函数一定是这个id（题目保证日志合法）
                // 它从 prevTime 运行到 time 结束，包含 time 这一整单位时间
                res[stk.top()] += time - prevTime + 1;
                stk.pop();
                prevTime = time + 1; // 下一个函数的开始时间从 time+1 算起
            }
        }
        return res;
    }
};
int main()
{
    return 0;
}