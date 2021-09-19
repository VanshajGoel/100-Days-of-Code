#include <iostream>
#include<vector>
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
TreeNode<int>* TakeInput()
{
    int rootData,n;
    cout<<"Enter the data of root: "; 
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData); 
    cout<<"Enter the number of children of "<<rootData<<": ";

    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child=TakeInput();
        root->children.push_back(child);
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
 TreeNode<int>* root=TakeInput();
 printTree(root);
 return 0;
}