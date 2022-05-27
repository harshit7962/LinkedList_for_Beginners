Node *reverse(Node *head) {
    if(head==NULL || head->next==NULL) return head;
    
    Node *curr = head, *prev=NULL;
    while(curr!=NULL) {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        //Since we have swapped our prev and next we need to traverse in reverse direction
        curr = curr->prev;
    }
    
    //At the end, we will have prev as the second last node and hence its prev after reversing will be last node, which is now to be returned as first node
    return prev->prev;
}
