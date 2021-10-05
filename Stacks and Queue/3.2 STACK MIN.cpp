**3.2 STACK MIN**
// There are multiple approaches to solve this problem
// 1. Using 2 stacks
// 2. Using stack of pairs
// 3. Some math tricks

// Time complexity: 0(1)
// Space complexity: 0(1)

class MinStack {
public:
    stack<long long int> minstack;
    long long int minval;
    MinStack() {
        
    }
    
    void push(long long int val) {
        if(minstack.empty()){
            minstack.push(val);
            minval=val;
        }
        else{
            if(val<minval){
                minstack.push(2*val-minval);
                minval=val;
            }
            else{
                minstack.push(val);
            }
        }
    }
    
    void pop() {
        if(minstack.top()<minval){
            minval=2*minval-minstack.top();
            minstack.pop();
        }
        else{
            minstack.pop();
        }
    }
    
    int top() {
        if(minstack.top()<minval){
            return minval;
        }
        else{
            return minstack.top();
        }
    }
    
    int getMin() {
        return minval;
    }
};

