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

TreeNode* takeInput()
{
    int rootData;
    cout<<"Enter data of root: ";
    cin>>rootData;
    TreeNode* root=new TreeNode(rootData);
    queue<TreeNode*>q;
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
            int c;
            cout<<"Enter "<<i<<"th child of "<<h->data<<" : ";
            cin>>c;
            TreeNode* child= new TreeNode(c);
            h->children.push_back(child);
            q.push(child); 
        }
    }
    return root;
}

void printTree(TreeNode* root)
{
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* h=q.front();
        q.pop();
        cout<<h->data<<": ";
        for(int i=0;i<h->children.size();i++)
        {
            cout<<h->children[i]->data<<", ";
            q.push(h->children[i]);
        }
        cout<<endl;
    }
}

int CountNodes(TreeNode* root)
{
    int n=1;
    for(int i=0;i<root->children.size();i++)
    {
        n+=CountNodes(root->children[i]);
    }
    return n;
} 

int CountHeight(TreeNode* root)
{
    int maxh=0;
    for(int i=0;i<root->children.size();i++)
    {
        int h=CountHeight(root->children[i]);
        if(h>maxh)
            maxh=h;
    }
    return maxh+1;
}

int main()
{
    TreeNode *root = takeInput();
    printTree(root);
    int n=CountNodes(root);
    cout<<"Total children are "<<n<<endl;
    int h=CountHeight(root);
    cout<<"Total height is "<<h;
    return 0;
}