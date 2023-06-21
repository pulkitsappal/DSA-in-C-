Node* rotate(Node* head, int k)
    {
        // Your code here
        
        Node *temp = head;
        Node *last = temp;
        Node *extra;
        
        while(last->next!=NULL){
            last = last->next;
        }
        
        int i = 1;
        while(i!=k){
            temp = temp->next;
            i++;
        }
        
        last->next = head;
        extra = temp->next;
        head = extra;
        temp->next = NULL;
        
        return head;
    }
