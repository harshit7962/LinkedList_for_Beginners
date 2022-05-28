//Print the value of nth node from the end... If n is greater than size of ll, print nothing...
void nthEnd(Node *head, int n) {
    if(head==NULL) return NULL;
    Node *first=head, *second=head;
    
    for(int i=1;i<=n;i++) {
        if(first==NULL) return;
        first =first->next;
    }
    
    while(first!=NULL) {
        second=second->next;
        first=first->next;
    }
    
    cout << (second->data);
}
