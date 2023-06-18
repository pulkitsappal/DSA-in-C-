class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *Prev, *Curr, *Next;
        Prev = NULL;
        Curr = Next = head;
        
        while(Next!=NULL){
            Next = Next->next;
            Curr->next = Prev;
            Prev = Curr;
            Curr = Next;
        }
        
        head = Prev;
        
        
        return head;
        
    }
    
};
