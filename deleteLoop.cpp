//Given a LL, we need to  detect if it has a loop, if it does then we remove the loop...
void deleteLoop(Node *head) {
    Node *slow=head, *fast=head;
    
    while(fast!=NULL && fast->next!=NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow) break;
    }
    
    if(fast==NULL || fast->next==NULL) return;
    
    slow = head;
    while(slow->next!=fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    
    fast = fast->next;
}
