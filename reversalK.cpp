//Reverse a ll in batch of size k...
/**
LL --> 1->2->3->4->5->6->7->8...
K = 3,
resultant LL --> 3->2->1->6->5->4->8->7
*/
Node *reversalK(Node *head, int k) {
    Node *curr=head, *prevFirst=curr;
    bool isFirstPass = true;
    while(curr!=NULL) {
        Node *prev=NULL, *first=curr;
        int count=0;
        while(curr!=NULL && count<k) {
            Node *next=curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(isFirstPass) {
            head = prev;
            isFirstPass = false;
        } else prevFirst->next = prev;
        prevFirst = first;
    }
    
    return head;
}
