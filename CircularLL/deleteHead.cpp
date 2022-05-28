//Here we need to delete the head node of a circular ll
//Conventional O(n) approach
//Here we traverse ll till we find the tail node and then we reference the tail node to head's next and delete head node
Node *deleteHead(Node *head) {
    if(head==NULL) return NULL;
    if(head->next == head) {
        delete head;
        return NULL;
    }
    
    Node *curr = head;
    while(curr->next!=head) curr = curr->next;
    curr->next = head->next;
    delete head;
    return curr->next;
}

//O(1) Appraoch
//Here we move the data of second node to head node, point head node to third node and delete the second node
Node *deleteHead2(Node *head) {
    if(head==NULL) return NULL;
    if(head->next == head) {
        delete head;
        return NULL;
    }
    
    //data of second node to head node
    head->data = head->next->data;
    //Storing second node to later delete it
    Node *temp = head->next;
    //Pointing head node to third node
    head->next = head->next->next;
    //Deleting second node
    delete temp;
    return head;
}
