class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        Node *temp = head;
        vector<int> v;
        
        while(temp!=NULL){
            v.push_back(temp->data);
            temp = temp->next;
        }
        
        int low = 0, high = v.size()-1;
        while(low<=high){
            int first = v[high] - v[low];
            int temp = v[low];
            v[low] = first;
            v[high] = temp;
            low++; high--;
        }
        
        temp = head;
        int i = 0;
        while(temp!=NULL){
            temp->data = v[i];
            temp = temp->next; i++;
        }
        
        return head;
    }
};


