
https://leetcode.com/problems/linked-list-cycle/description/?envType=daily-question&envId=2023-09-04

class Solution {
public:
    bool hasCycle(ListNode *l) {
        // ListNode *slow=head;
        // ListNode *fast=head;
        while(l!=NULL){
            
            if(l->val==1e6){
                return 1;
            }
            l->val=1e6;
            l=l->next;
        }
        return 0;   
    }
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                return 1;
            }
        }
        return 0;

        
    }
};
