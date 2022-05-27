//Given a linked list, delete the last node of it
Node *deleteTail(Node *head) {
    if(head==NULL) return NULL;
    if(head->next==NULL) {
        delete head;
        return NULL;
    }
    
    Node *temp = head;
    while(temp->next->next!=NULL) temp = temp->next;
    //Here we need to dereference the last node of list as well...
    delete (temp->next);
    temp->next =NULL;
    return head;
}
