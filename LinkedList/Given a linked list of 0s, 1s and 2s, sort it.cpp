class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zero = 0;
        int one = 0;
        int two = 0;
        
        Node *temp = head;
        
        while(temp!=NULL){
            if(temp->data==0) zero++;
            else if(temp->data==1) one++;
            else two++;
            temp = temp->next;
        }
        
        temp = head;
        
        for(int i=0; i<zero; i++){
            temp->data = 0;
            temp = temp->next;
        }
        
        
        for(int i=zero; i<zero+one; i++){
            temp->data = 1;
            temp = temp->next;
        }
        
        for(int i=zero+one; i<zero+one+two; i++){
            temp->data = 2;
            temp = temp->next;
        }
        
        return head;
    }
};
