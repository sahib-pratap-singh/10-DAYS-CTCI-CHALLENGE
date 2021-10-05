// Solution for **2.8 LOOP DETECTION**

`//Two approaches to solve this problem
//1st using hashmap
//2nd slow and fast pointer

//Time complexity:O(n);
//Space complexity:O(1)`

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};