class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        
        ListNode *temp = head;
        ListNode *prev = NULL;
        
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        
        if(head==temp) return head;
        
        prev->next = NULL;
        temp->next = head;
        head = temp;
        
        return head;
    }
};
