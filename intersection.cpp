//We need to find the intersection Node of the two given ll...
Node *intersection(Node *head1, Node *head2) {
    int count1=0, count2=0;
    for(Node *curr=head1;curr!=NULL;curr=curr->next) count1++;
    for(Node *curr=head2;curr!=NULL;curr=curr->next) count2++;
    
    if(count1>count2) {
        while(count1!=count2) {
            head1 = head1->next;
            count1--;
        }
    } else {
        while(count2!=count1) {
            head2 = head2->next;
            count2--;
        }
    }
    
    while(head1!=NULL && head1!=head2) {
        head1 = head1->next;
        head2 = head2->next;
    }
    
    return head1;
}
