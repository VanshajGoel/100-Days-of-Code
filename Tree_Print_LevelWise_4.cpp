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
    int rootData;
    cout<<"Enter the data of root: ";
    cin>>rootData;
    TreeNode<int>* root= new TreeNode<int>(rootData);
    queue<TreeNode<int>*>  q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int>* f =q.front();
        q.pop();
        int n;
        cout<<"Enter the number of children of "<<f->data<<" : ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int childData;
            cout<<"Enter child no. "<<i+1<<" of "<<f->data<<": ";
            cin>>childData;
            TreeNode<int>* child= new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}
void printTreeLevelWise(TreeNode<int>* root)
{
    queue<TreeNode<int>*>  q;
    q.push(root);
   
    while(!q.empty())
    {
        TreeNode<int>* f=q.front();
        q.pop();
        cout<<f->data<<": ";
        for(int i=0;i<f->children.size();i++)
        {
            cout<<f->children[i]->data<<", ";
            q.push(f->children[i]);
        }
        cout<<endl;
    }
   
}
int main()
{ 
 TreeNode<int>* root=TakeInputLevelWise();
 printTreeLevelWise(root);
 return 0;
}