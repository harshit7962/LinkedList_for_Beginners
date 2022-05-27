//Inserting a given node at start of a Circular Linked List

//Conventional O(n) Approach
//Here we point the new node to head node and then traverse through the ll to find the tail and then point tail to new node
Node *insertBegin(Node *head, int x) {
    Node *temp = new Node(x);
    if(head==NULL) {
        temp->next=temp;
        return temp;
    }
    temp->next = head;
    Node *curr=head;
    while(curr->next!=head) curr = curr->next;
    curr->next = temp;
    
    return temp;
}

//O(1) Appraoch
//Here we point the new node to second node and head node to the new node and finally swap the values of head node and new node
Node *insertHead2(Node *head, int x) {
    Node *temp = new Node(x);
    if(head==NULL) {
        temp->next = temp;
        return temp;
    }
    
    temp->next = head->next;
    head->next = temp;
    int tp = head->data;
    head->data = x;
    temp->data = tp;
    return head;
}
