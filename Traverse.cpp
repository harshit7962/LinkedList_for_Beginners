//Traversing and printing each node's value in our linked list
void print(Node *head) {
    if(head==NULL) return;
    cout << head->data << endl;
    print(head->next);
    
}
