#include <bits/stdc++.h>

using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1, s2;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(s1.size() > 1) s2.push(s1.top()), s1.pop();
        int t = s1.top();
        s1.pop();
        while(s2.size()) s1.push(s2.top()), s2.pop(); 
        return t;
    }
    
    /** Get the front element. */
    int peek() {
        while(s1.size() > 1) s2.push(s1.top()), s1.pop();
        int t = s1.top();
        while(s2.size()) s1.push(s2.top()), s2.pop(); 
        return t;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};

int main()
{

    return 0;
}