//Print value of the middle node in our ll
void middle(Node *head) {
    if(head==NULL) return NULL;
    
    Node *fast=head, slow=head;
    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    cout << (slow->data);
}
