//Given a value x, we need to insert it in a sorted ll such that list still remains sorted...
Node *sortedInsert(Node *head, int x) {
    Node *temp = new Node(x);
    
    if(head==NULL) return temp;
    
    if(head->data>x) {
        temp->next = head;
        return temp;
    }
    
    Node *curr = head;
    while(curr->next!=NULL && curr->next->data<x) curr=curr->next;
    if(curr->next==NULL) {
        curr->next = temp;
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
