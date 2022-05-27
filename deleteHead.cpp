//Given a Linked List, Delete the first node of it...
Node *deleteHead(Node *head) {
    if(head==NULL) return NULL;
    
    Node *temp = head->next;
    //We need to Dereference the first node in CPP
    delete head;
    return temp;
}
