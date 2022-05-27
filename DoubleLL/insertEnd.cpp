//Inserting a new node at end of a given Doubly Linked List
Node *insertEnd(Node *head, int val) {
    //Creation of new node
    Node *temp = new Node(val);
  
    //If given node is null, we return the new node
    if(head==NULL) return temp;
  
    Node *curr = head;
    while(curr->next!=NULL) curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
    
    return head;
}
