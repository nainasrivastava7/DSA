// My leetcode problem 225 solution

#include <queue>
using namespace std;

class MyStack {
private:
queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int s= q.size();
        q.push(x);
        for(int i=1; i<=s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int top_element=q.front();
        q.pop();
        return top_element;
    }
    
    int top() {
        return q.front(); 
    }
    
    bool empty() {
        return q.empty();
    }
};
