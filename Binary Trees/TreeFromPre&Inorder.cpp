//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* Helper(vector<int> preorder, vector <int>inorder, int is,int ie, int ps, int pe)
    {
        if(is>ie)
            return NULL;
        int rootD= preorder[ps];
        int rootIndex=-1; 
        for(int i=is;i<=ie;i++)
        {
            if(inorder[i]==rootD){
                rootIndex=i;
                break;}
        }
        int lis = is;
        int lie = rootIndex-1;
        int lps = ps+1;
        int lpe = lps+lie-lis;
         
        int ris =rootIndex+1;
        int rie = ie;
        int rpe = pe;
        int rps = lpe+1;
    
        TreeNode* rootn = new TreeNode(rootD);
       
        rootn->left = Helper(preorder, inorder, lis, lie, lps, lpe);
        rootn->right= Helper(preorder, inorder, ris, rie, rps, rpe);
        return rootn;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int n=preorder.size();
        return Helper( preorder, inorder,0,n-1,0,n-1);
    }
};