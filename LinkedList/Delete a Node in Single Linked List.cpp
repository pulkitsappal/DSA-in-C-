Node* deleteNode(Node *head,int x)
{
    //Your code here
    
    if(x==1) {
        head = head->next;
        return head;
    }
    Node *curr = head;
    Node *prev;
    
    
    int i = 1;
    while(curr!=NULL){
        if(i==x) {
            curr = curr->next;
            prev->next = curr;
            prev = curr;
            break;
        }
        prev = curr;
        curr = curr->next;
        i++;
    }
    

    return head;
}
