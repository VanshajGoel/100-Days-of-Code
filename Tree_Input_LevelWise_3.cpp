#include <iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T> 
class TreeNode{
 public:
 T data;
 vector<TreeNode<T>*> children;
 TreeNode (T data)
 {
     this->data=data;
 }
};
TreeNode<int>* TakeInputLevelWise()
{
    int rootData,n;
    cout<<"Enter the data of root: "; 
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData); 
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        int n;
        TreeNode<int>* f= q.front();
        q.pop();
        cout<<"Enter the number of children of "<<f->data<<" :";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int childData;
            cout<<"Enter the child number "<<i<<" of "<<f->data<<" :";
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}
void printTree(TreeNode<int>* root)
{
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{ 
 TreeNode<int>* root=TakeInputLevelWise();
 printTree(root);
 return 0;
}