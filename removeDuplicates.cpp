//Here we need to remove duplicates from a sorted linked list
Node *removeDuplicates(Node *head) {
    if(head==NULL || head->next==NULL) return head;
    Node *curr = head;
    
    while(curr!=NULL) {
        while(curr->next!=NULL && curr->next->data==curr->data) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        if(curr!=NULL) curr=curr->next;
    }
    
    return head;
}
