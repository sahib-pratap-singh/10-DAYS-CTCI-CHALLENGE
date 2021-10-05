// Solution for **2.3 DELETE MIDDLE NODE**

// Two approaches to solve this question 
// 1. calculate the length n and delete n/2 element
// 2. Slow and fast pointer

// Time complexity: O(n)
// Space complexity: O(1)

Node* deleteMid(Node* head)
{
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    Node* prev=head;
    while(fast!=NULL and fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    return head;
}`