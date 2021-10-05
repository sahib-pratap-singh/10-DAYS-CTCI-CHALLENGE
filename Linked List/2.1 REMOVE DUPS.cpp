 My approach for ** 2.1 REMOVE DUPS **

// **1. Sorted Linkedlist**
//Multiple approaches to solve this problem 
//We can store element in any data structure and create new list
//Using hashmap
//Linear

//I am doing linearly
//Time complexity: O(n)
//Space complexity: O(1)

`class Solution {
public:
    void removeRedudndancy(ListNode* head){
        while(head->next!=NULL){
            //If found duplicate then points to next element
            if(head->val==head->next->val){
                head->next=head->next->next;
            }
            else{
                head=head->next;
            }
        }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        removeRedudndancy(head);
        return head;
    }
};`

**For Unsorted Linkedlist**

//Multiple approaches to solve this problem 
//Sorting
//Using hashmap

//Using hashmap
//Time complexity: O(n)
//Space complexity: O(n)

`class Solution {
public:
    void removeRedudndancy(ListNode* head, unordered_map<int,int> mp){
        while(head->next!=NULL){
            //If found duplicate then points to next element
            if(mp.count(head->next->val)){
                head->next=head->next->next;
            }
            else{
                mp[head->next->val]++;
                head=head->next;
            }
        }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        unordered_map<int,int> mp;
        mp[head->val]++;
        removeRedudndancy(head, mp);
        return head;
    }
};`