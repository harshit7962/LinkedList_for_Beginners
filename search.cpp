//Given a linked list and a target value, we need to print the position of target value...
//If target is not present, return -1;

//It is a basic traversal problem, with an addition case of checking if the element is of target value
int search(Node *head, int target) {
    int count=1;
    Node *curr = head;
    while(curr!=NULL) {
        if(curr->data == target) return count;
        count++;
        curr=curr->next;
    }
    return -1;
}
