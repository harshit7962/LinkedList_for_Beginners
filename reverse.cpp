//Reverse the order of our ll and return the new head...
Node *reverse(Node *head) {
    if(head==NULL) return NULL;
    
    Node *prev=NULL, curr=head;
    while(curr!=NULL) {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}
