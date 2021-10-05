**3.5 SORT STACK**

// Two approaches to solve this problem
// 1. Using extra stack (Really easy)
// 2. Recursion

// My solution using recursion

void insertAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    if(s.top()>val){
        int new_val=s.top();
        s.pop();
        insertAtBottom(s,val);
        s.push(new_val);
    }
    else{
        s.push(val);
        return;
    }
}
void SortedStack :: sort()
{
   if(s.empty()){
       return;
   }
   int cur_element=s.top();
   s.pop();
   // calling recursion
   sort();
   insertAtBottom(s,cur_element);
}