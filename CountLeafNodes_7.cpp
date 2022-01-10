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

void printAtDepth(int k, TreeNode* root)
{
    if(k==0)
    {
        cout<<root->data<<", ";
    }
    else
    {
        for(int i=0;i<root->children.size();i++)
        {
            printAtDepth(k-1, root->children[i]);
        }
    }
}
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int CountLeafNodes(TreeNode* root)
{
    int n=0;
    if(root->children.size()==0)
    {
        return 1;
    }
    else
    {
        for(int i=0;i<root->children.size();i++)
        {
            n+=CountLeafNodes(root->children[i]);
        }
    }
    return n;
}

int main()
{
    TreeNode* root=TakeInput();
    printTree(root);
    int k;
    cout<<"Enter depth for printing nodes: ";
    cin>>k;
    printAtDepth(k,root);
    cout<<endl;
    int n =CountLeafNodes(root);
    cout<<"Total leaf nodes are "<<n<<endl;
    return 0;
}