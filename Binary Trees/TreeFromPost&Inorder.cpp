//https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
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
    TreeNode* Helper(vector<int> inorder, vector<int> postorder, int is, int ie, int ps, int pe)
    {
        if(is>ie)
            return NULL;
        int rootD= postorder[pe];
        int rootIndex=-1;
        for(int i=is;i<=ie;i++)
        {
            if(inorder[i]==rootD)
            {
                rootIndex=i;
                break;
            }           
        }
        int lis = is;
        int lie = rootIndex-1; 
        int lps = ps;
        int lpe = lps+lie-lis;

        int ris = rootIndex+1;
        int rie = ie;
        int rps = lpe+1;
        int rpe = pe-1;

        TreeNode* root = new TreeNode(rootD);
        root->left = Helper(inorder,postorder, lis,lie,lps,lpe);
        root->right = Helper(inorder,postorder, ris,rie,rps,rpe);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n= inorder.size();
        return Helper(inorder, postorder, 0,n-1,0,n-1);
    }
};