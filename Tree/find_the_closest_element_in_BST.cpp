class Solution
{
    private:
        int min = INT_MAX, curr_min = 0;
    public:
    //Function to find the least absolute difference between any node
	  //value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {
        //Your code here
        if(root==NULL){
            return NULL;
        }
        
        minDiff(root->left, K);
        
        curr_min = abs(root->data - K);
        if(curr_min<min) min = curr_min;
        
        minDiff(root->right, K);
        
        return min;
    }
};
