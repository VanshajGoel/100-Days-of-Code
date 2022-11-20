class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector <int> ans;
 
      queue <Node*> q;
      q.push (node);
      
      ans.push_back (node -> data);
      
      while (!q.empty())
      {
          Node* front = q.front();
          q.pop();
          if (front -> left)
          {
              ans.push_back (front -> left -> data);
              q.push (front -> left);
          }
          if (front -> right)
          {
              ans.push_back (front -> right -> data);
              q.push (front -> right);
          }
      }
      return ans;
    }
