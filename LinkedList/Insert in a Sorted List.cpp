Node *sortedInsert(struct Node* head, int data) {
        // Code here
        if(head->data>=data) {
            Node *n = new Node(data);
            n->next = head;
            head = n;
            return head;
        }
        
        Node *temp = head;
        while(temp->next!=NULL){
            if(temp->next->data>=data){
                Node *n = new Node(data);
                n->next = temp->next;
                temp->next = n;
                return head;
            }
            temp = temp->next;
        }
        
        Node *n = new Node(data);
        temp->next = n;
        n->next = NULL;
        return head;
        
    }
