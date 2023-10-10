
https://www.codingninjas.com/studio/problems/create-binary-tree_8360671?leftPanelTab=1


Node *solve(int i, vector<int> &arr){
    int n=arr.size();
    Node * head=new Node(arr[i]);


    if(i>=n) return NULL;
    head->left=solve(2*i+1,arr);
    
    head->right=solve(2*i+2,arr);
    return head;
}



Node* createTree(vector<int>&arr){
    return solve(0,arr);
}
