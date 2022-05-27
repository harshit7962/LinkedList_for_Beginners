//Inserting at end of a circular linked list
//O(1) Solution using similar appraoch  of adding in the start of a linked list...
Node *insertEnd(Node *head, int x) {
    Node *temp = new Node(x);
    if(head==NULL) {
        temp->next = temp;
        return temp;
    }
    
    temp->next = head->next;
    head->next = temp;
    int t = head->data;
    head->data = x;
    temp->data = t;
    
    return temp;
}
