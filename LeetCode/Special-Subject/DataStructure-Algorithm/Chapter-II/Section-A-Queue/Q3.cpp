#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
// 用双栈模拟队列
class MyQueue {
public:
    stack<int> in;
    stack<int> out;

    void intoout() {
        if(out.empty()) {
            while(!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
    }

    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
        intoout();
    }
    
    int pop() {
        intoout();
        int x = out.top();
        out.pop();
        return x;
    }
    
    int peek() {
        intoout();
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};
int main()
{
    return 0;
}