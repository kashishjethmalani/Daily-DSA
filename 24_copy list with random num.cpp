
https://leetcode.com/problems/copy-list-with-random-pointer/description/


class Solution {
public:
    unordered_map<Node*,Node*> m;
    Node* copyRandomList(Node* head) {
       
        if(!head)
            return NULL;
        Node *tem = new Node(head->val);
        m[head] = tem;
        tem->next = copyRandomList(head->next);
        tem->random = m[head->random];
        
        return tem;
        
    }
};
