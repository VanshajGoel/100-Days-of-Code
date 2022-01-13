#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T>
class BTNode
{
public:
    T data;
    BTNode* left;
    BTNode* right;
    BTNode(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

BTNode<int>* takeInput()
{
    int rootData;
    cout<<"Enter data: ";
    cin>>rootData;
    if(rootData==-1)
        return NULL;
    BTNode<int>* root = new BTNode<int>(rootData);
    root->left=takeInput();
    root->right=takeInput();
    return root;
}

void printTree(BTNode<int>* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" : ";
    if((root->left)!=NULL)
        cout<<"L "<<root->left->data<<" ";
    if((root->right)!=NULL)
        cout<<"R "<<root->right->data<<" "; 
    cout<<endl;       
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BTNode<int>* root= takeInput();
    printTree(root);
    return 0;
}
