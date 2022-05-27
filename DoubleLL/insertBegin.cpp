//Inserting a new node at beginning of a Double Linked List
Node *insertBegin(Node *head, int val) {
    Node *temp = new Node(val);
    if(head==NULL) return temp;
    temp->next = head;
    head-prev = temp;
    return temp;
}
