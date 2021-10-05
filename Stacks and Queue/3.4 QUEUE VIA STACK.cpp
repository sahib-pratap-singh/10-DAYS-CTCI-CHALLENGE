**3.4 QUEUE VIA STACK**

// Implementing Queue using two stacks
// 1st approach
// Similar to @kar#0390 Solution
// 2nd approach

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int pop_element=s1.top();
        s1.pop();
        return pop_element;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};
`