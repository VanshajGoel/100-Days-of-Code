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
};

TreeNode* TakeInput()
{
    int rootData;
    cout<<"Enter data of root: ";
    cin>>rootData;
    queue<TreeNode*>q;
    TreeNode* root = new TreeNode(rootData);
    q.push(root);
    while(!q.empty())
    {
        TreeNode* h=q.front();
        q.pop();
        int n;
        cout<<"Enter number of children of "<<h->data<<" : ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int childData;
            cout<<"Enter "<<i<<"th child of "<<h->data<<" : ";
            cin>>childData;
            TreeNode* child=new TreeNode(childData);
            h->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}

void printTree(TreeNode* root)
{
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* h=q.front();
        q.pop();
        cout<<h->data<<" : ";
        for(int i=0;i<h->children.size();i++)
        {
            cout<<h->children[i]->data<<", ";
            q.push(h->children[i]);
        }
        cout<<endl;
    }
}

int CountHeight(TreeNode* root)
{
    int maxh=0;
    for(int i=0;i<root->children.size();i++)
    {
        int h= CountHeight(root->children[i]);
        if(h>maxh)
            maxh=h;
    }
    return maxh+1;
}

void printAtDepth(int n, TreeNode* root)
{
    if(root==NULL)
        return;
    if(n==0)
    {
        cout<<root->data<<", ";
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
            printAtDepth((n-1),root->children[i]);
    }
} 

int main()
{
    TreeNode* root=TakeInput();
    printTree(root);
    int h=CountHeight(root);
    cout<<"Height of tree: "<<h<<endl;
    int k;
    cout<<"Enter depth for printing nodes: ";
    cin>>k;
    printAtDepth(k,root);
    return 0;
}