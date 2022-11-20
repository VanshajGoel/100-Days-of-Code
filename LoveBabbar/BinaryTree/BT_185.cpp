void traverse (Node *root, int level, vector <int> &ans)
{
    if (root == NULL)
        return;
    if (ans.size() == level)
        ans.push_back (root -> data);
    traverse (root -> left, level + 1, ans);
    traverse (root -> right, level + 1, ans);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector <int> ans;
   traverse (root, 0, ans);
   return ans;
}
