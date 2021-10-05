// My approaches for **2.2 RETURN Kth TO LAST NODE**

//2 Approaches to solve this problem

//Caculate the length of the list and traverse n-k that node is result
//Using fast and slow pointer approach

Timecomplexity: O(n)
Spacecomplexity:O(1)
//This will delete that element, but if you want to return that element just return slow->next


`class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* newnode= new ListNode(0);
        newnode->next=head;
        //Slow pointer
        ListNode* slow=newnode;
        //Fast pointer
        ListNode* fast=newnode;
        //Iterate fast n times
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        //Slow next will be our result
        slow->next=slow->next->next;
        return newnode->next;
    }
};`