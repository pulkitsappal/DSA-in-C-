class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
    //add your code here
    int count = 0;
    while(head!=NULL){
        if(head->data==search_for) count++;
        head = head->next;
    }
    return count;
    }
};
