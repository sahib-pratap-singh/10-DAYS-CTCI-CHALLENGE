// Solution for **2.4 PARTITION**
//Two pointer approach
//break the list in two parts before_x and after_or_x

//Time complexity: O(N)
//Space complexity: O(1)

`class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* start_before_x=new ListNode(0);
        ListNode* before_x= start_before_x;
        ListNode* start_after_or_x= new ListNode(0);
        ListNode* after_or_x=start_after_or_x;
    
        while(head!=NULL){
            if(head->val<x){
                before_x->next=head;
                before_x=before_x->next;
            }
            else{
                after_or_x->next=head;
                after_or_x=after_or_x->next;
            }
            head=head->next;
        }
        after_or_x->next=NULL;
        before_x->next=start_after_or_x->next;
        return start_before_x->next;
    }
};`