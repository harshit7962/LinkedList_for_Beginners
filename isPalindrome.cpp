//Here we need to check if the ll is palindromic...
bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode *middle=head, *tail=head;
        while(tail->next!=NULL && tail->next->next!=NULL) {
            tail = tail->next->next;
            middle = middle->next;
        }
        
        ListNode *curr = middle->next, *prev = middle;
        
        while(curr!=NULL) {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        middle->next->next = NULL;
        middle->next = prev;
        middle = middle->next;
       
        while(middle!=NULL) {
            if(head->val != middle->val) return false;
            middle = middle->next;
            head = head->next;
        }
        
        return true;
    }
