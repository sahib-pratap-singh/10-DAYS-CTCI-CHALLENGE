// Solution for **2.7 INTERSECTION**

//1st approach using hashmap
//Time complexity: O(n);
//Space complexity: O(1)

**`class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> intersection;
        while(headA!=NULL){
            intersection[headA]++;
            headA=headA->next;
        }
        while(headB!=NULL){
            if(intersection.count(headB)){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};**`

//2nd approach
//Using 2 pointer , 1st point 1st list and 2nd pointer ->2nd list

//Time complexity: O(n)
//Space complexity: O(1)

`**class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* list1pointer=headA;
        ListNode* list2pointer=headB;
        //Till both the pointer become equal
        while(list1pointer != list2pointer){
            list1pointer=list1pointer==NULL?headB:list1pointer->next;
            list2pointer=list2pointer==NULL?headA:list2pointer->next;
        }
        //if they do not intersect it will return NULL
        return list1pointer;
    }
};**`