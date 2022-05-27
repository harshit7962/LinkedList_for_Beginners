//Given a Linked List, an element and a position to insert it in, we need to insert that element at given position
Node *insertAtPos(Node *head, int val, int pos) {
    Node *temp = new Node(val);
    //Corner Case of inserting at the first position
    if(pos==1) {
        temp->next = head;
        return temp;
    }
    
    Node *curr = head;
    for(int i=0;i<pos-2 && curr!=NULL;i++) curr = curr->next;
    
    if(curr==NULL) return head;
    
    temp->next = curr->next;
    curr->next = temp;
    
    return head;
}
