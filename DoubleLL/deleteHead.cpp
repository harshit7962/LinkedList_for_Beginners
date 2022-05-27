//Delete head of a doubly linked list
Node *deleteHead(Node *head) {
    if(head==NULL) return NULL;
    
    if(head->next==NULL) {
        delete head;
        return NULL;
    }
    
    //Creation of a new pointer to store head
    Node *temp = head;
    head = head->next;
    head->prev=NULL;
  
    //Deleting the new pointer to dereference the redundant head
    delete temp;
    
    return head;
}
