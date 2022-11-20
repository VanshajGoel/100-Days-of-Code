vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector <int> ans;
    queue <Node*> q;
    q.push (root);
    ans.push_back (root -> data);
    while (!q.empty ())
    {
        Node* front = q.front();
        q.pop();
        if (front -> right)
        {
            q.push (front -> right);
            ans.push_back (front -> right -> data);
        }
        if (front -> left)
        {
            q.push (front -> left);
            ans.push_back (front -> left -> data);
        }
    }
    reverse (ans.begin(), ans.end());
    return ans;
}
