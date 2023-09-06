
https://leetcode.com/problems/copy-list-with-random-pointer/description/


class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(!head) return NULL;

        unordered_map<Node*, Node*> m;

        Node*curr=head;
        while(curr){
            m[curr] = new Node(curr->val);

            curr=curr->next;
        }

        curr=head;//for 2nd traversal

        while(curr){
            m[curr]->next=m[curr->next];
            m[curr]->random=m[curr->random];
            curr=curr->next;
        }

        return m[head];
        
    }
};
