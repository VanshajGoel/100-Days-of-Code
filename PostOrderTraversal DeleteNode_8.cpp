#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class TreeNode
{
public:
int data;
vector<TreeNode*> children;
TreeNode(int data)
{
    this->data=data;
}
~TreeNode()
{
    for(int i=0;i<children.size();i++)
    {
        delete children[i];
    }
}
};

TreeNode* takeInput()
{
    int rootData;
    cout<<"Enter data of root: ";
    cin>>rootData;
    queue<TreeNode*> q;
    TreeNode* root= new TreeNode(rootData);
    q.push(root);
    while(!q.empty())
    {
        TreeNode* h=q.front();
        q.pop();
        int n;
        cout<<"Enter number of children of "<<h->data<<" : ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int childData;
            cout<<"Enter "<<i+1<<"th child of "<<h->data<<" : ";
            cin>>childData;
            TreeNode* child=new TreeNode(childData);
            h->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}

void PostOrderTraversal(TreeNode* root)
{

    for(int i=0;i<root->children.size();i++)
    {
        PostOrderTraversal(root->children[i]);
    }
    cout<<root->data<<" ";
    
}

int main()
{
    TreeNode* root=takeInput();
    PostOrderTraversal(root);
    cout<<endl;
    delete root;
    return 0;

}