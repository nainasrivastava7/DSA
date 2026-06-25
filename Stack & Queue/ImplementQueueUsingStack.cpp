// My leetcode problem 232 solution

#include <stack>
using namespace std;
class MyQueue {
    private:
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s1.size()>0){
            s2.push(s1.top());
            s1.pop();
        }
s1.push(x);
while(s2.size()>0){
    s1.push(s2.top());
    s2.pop();
}
    }
    
    int pop() {
        int top_element=s1.top();
        s1.pop();
        return top_element;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};
