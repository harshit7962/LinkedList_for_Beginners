//Deleting the tail of a doubly linked list
Node *deleteTail(Node *head) {
    if(head==NULL) return NULL;
    if(head->next==NULL) {
        delete head;
        return NULL;
    }
    
    Node *curr=head;
    while(curr->next!=NULL) curr = curr->next;
    
    curr->prev->next = NULL;
    
    delete curr;
    
    return head;
}
