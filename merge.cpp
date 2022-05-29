//Merger two sorted linked list  such that the resultant linkedlist is also sorted
Node *merge(Node *a, Node *b) {
    if(b==NULL) return a;
    if(a==NULL) return b;
    Node *a=head1, *b=head2;
    Node *head = NULL, *tail=NULL;
    if(a->data < b->data) {
        head = a;
        tail = a;
        a = a->next;
    } else {
        head = b;
        tail = b;
        b = b->next;
    }
    
    while(a!=NULL && b!=NULL) {
        if(a->data <= b->data) {
            tail->next = a;
            tail = a;
            a = a->next;
        } else {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a!=NULL) tail->next = a;
    else (b!=NULL) tail->next = b;
    
    return head;
}
