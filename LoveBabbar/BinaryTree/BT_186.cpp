class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    
    void traverse (Node* root, vector <int> &ans, int level)
    {
        
        if (!root)
            return;
        if (ans.size() == level)
            ans.push_back (root -> data);
        traverse (root -> right, ans, level + 1);
        traverse (root -> left, ans, level + 1);
        
    }
    
    vector<int> rightView(Node *root)
    {
       // Your Code here 
       vector <int> ans;
       traverse (root, ans, 0);
       return ans;
    }
};
