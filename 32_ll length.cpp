
https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884?leftPanelTab=1

int length(Node *head)
{
    int c;

    while(head->next!=NULL){
        c++;
        head=head->next;
    }
    //cout<<c<<endl;
    return c+1;
}
