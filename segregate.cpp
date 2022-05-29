//Given a LinkedList we need to keep  all the even nodes to its start and move all the odd value to end keeping their relative order same...
Node *segregate(Node *head) {
    Node *evens=NULL, *evene=NULL,  *odds=NULL, *odde=NULL;
    
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        int x = curr->data;
        if(x%2==0) {
            if(evens==NULL) {
                evens=curr;
                evene=evens;
            }  else {
                evene->next = curr;
                evene = evene->next;
            }
        } else {
            if(odds==NULL) {
                odds=curr;
                odde=odds;
            } else {
                odde->next = curr;
                odde = odde->next;
            }
        }
    }
    
    if(odds==NULL || evens==NULL) return head;
    
    evene->next = odds;
    odde->next = NULL;
    
    return evens;
}
