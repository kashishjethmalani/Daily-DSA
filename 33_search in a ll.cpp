
https://www.codingninjas.com/studio/problems/search-in-a-linked-list_975381?leftPanelTab=1

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.

    while(head!=NULL){
        if(head->data==k){
            return 1;
        }
        head=head->next;
    }
    // cout<<1<<endl;
    return 0;
}
