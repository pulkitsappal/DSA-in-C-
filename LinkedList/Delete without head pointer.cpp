class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    
    void deleteNode(Node *del)
    {
       // Your code here
       Node *t = del->next;
       del->data = t->data;
       del->next = t->next;
    }

};
