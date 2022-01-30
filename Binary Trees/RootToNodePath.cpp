#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class TreeNode
{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int data)
        {
            this->data=data;
            left=NULL;
            right=NULL;
        }    
        ~TreeNode()
        {
            delete left;
            delete right;
        }
};

TreeNode * TakeInput()
{
    int rootData;
    cout<<"Enter data of root: ";
    cin>>rootData;
    if(rootData==-1)
        return NULL;
    TreeNode* root = new TreeNode(rootData);
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
      TreeNode* h=q.front();
      q.pop();
      int ldata,rdata;
      cout<<"Enter 1st child of "<<h->data<<": ";
      cin>>ldata;   
      cout<<"Enter 2nd child of "<<h->data<<": ";
      cin>>rdata;   
      if(ldata!=-1)
      {
          TreeNode* leftNode= new TreeNode(ldata);
          q.push(leftNode);
          h->left=leftNode;
      }
      if(rdata!=-1)
      {
          TreeNode* rightNode= new TreeNode(rdata);
          q.push(rightNode);
          h->right=rightNode;
      }
    }
    return root;
}

void PrintTree(TreeNode* root)
{
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode* h=q.front();
        q.pop();
        if(h==NULL)
        {
            cout<<endl;
          
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout<<h->data<<" ";
            if(h->left)
                q.push(h->left);
            if(h->right)
                q.push(h->right);    
        }
    }
}

bool TracePath(TreeNode* root, int node, vector<int>& path)
{   
    if(root==NULL)
        return false;
    path.push_back(root->data); 
    if(root->data==node)
    {
        return true;
    }   
    
    bool left = TracePath(root->left, node, path);
    bool right = TracePath(root->right, node, path);
    if(left|| right )
    {
        return true;
    }   
    path.pop_back();
    return false;   
}

int main()
{
    TreeNode* root = TakeInput();
    PrintTree(root);
    int n;
    cout<<"Enter leaf node to trace: ";
    cin>>n;
    vector<int> path;
    if(TracePath(root, n, path))
    {
        for(int i=0; i<path.size();i++)
        {
            cout<<path[i]<<" ";
        }
    }
    else
        cout<<"Path not found";
    delete root;
   return 0;
}