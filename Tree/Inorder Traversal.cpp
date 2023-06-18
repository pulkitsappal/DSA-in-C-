class Solution {
    private:
    vector<int> v;
    
    void helper(Node* root){
        if(root==NULL) return;
        
        inOrder(root->left);
        v.push_back(root->data);
        inOrder(root->right);
        
    }
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        helper(root);
        return v;
    }
};
