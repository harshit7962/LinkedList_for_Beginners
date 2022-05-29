//Approach 1...
//We change the next pointer of each node in LL to a dummy Node that we created...
//If we visit an already visited Node, it will already be pointing to dummy Node and hence we return true...

bool hasLoop(Node *head) {
    Node *temp, *curr=head;
    
    while(curr!=NULL) {
        //If next of curr points already to dummy node, we return false...
        if(curr->next == temp) return true;
        Node *next = curr->next;
        curr->next = temp;
        curr = next;
    }
    return false;
}
//O(n) Solution which modifies our original LL


//Appraoch 2...
//Using unordered_set to store if a Node is already visited
bool hasLoop2(Node *head) {
    unordered_set<Node *> s;
    
    for(Node *curr=head;curr!=NULL;curr=curr->next) {
        if(s.count(curr)>0) return true;
        s.insert(curr);
    }
    
    return false;
}
//O(n) TC and O(n) AS...


//Approach 3
//Using Fast and Slow pointer approach also known as Floyd's Cycle Detection...
bool FloydCycleDetection(Node *head) {
    Node *slow=head, *fast=head;
    
    while(fast!=NULL && fast->next!=NULL) {
        if(fast == slow) return true;
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return false;
}
//O(n) Solution with no extra space...
