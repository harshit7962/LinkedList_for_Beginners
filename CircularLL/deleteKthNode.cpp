//Given an integer k, less than size of the linkedlist, we need to delete the kth element fro =m our ll
Node *deleteKth(Node *head, int k) {
    if(head==NULL) return head;
    //If k==1, we need to delete the head node
    if(k==1) return deleteHead(head);
    
    //We take hold of the previous node of the node to be deleted, assign it's next to the next of node to be deleted
    Node *curr=head;
    for(int i=0;i<k-2;i++) curr=curr->next;
    
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    
    return head;
}
