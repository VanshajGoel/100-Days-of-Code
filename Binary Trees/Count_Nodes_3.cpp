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
    ~BTNode()
    {
        delete left;
        delete right;
    }
};

BTNode<int>* takeInputLevelWise()
{
    int rootData;
    cout<<"Enter data: ";
    cin>>rootData;
    if(rootData==-1)
        return NULL;
    BTNode<int>* root = new BTNode<int>(rootData);
    queue<BTNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        BTNode<int>* h= q.front();
        q.pop();
        int leftData, rightData;
        cout<<"Enter left child of "<<h->data<<" : ";
        cin>>leftData;
        if(leftData != -1)
        {
            BTNode<int>* l = new BTNode<int>(leftData);
            h->left=l;
            q.push(l);
        }    
        cout<<"Enter right child of "<<h->data<<" : ";
        cin>>rightData;

        if(rightData != -1)
        {
            BTNode<int>* r = new BTNode<int>(rightData);
            h->right=r; 
            q.push(r);
        }      
    }
    return root;
}

void printTree(BTNode<int>* root)
{
    if(root==NULL)
        return;
    queue<BTNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        BTNode<int>* h = q.front();
        q.pop();
        cout<<h->data<<" L:";
        if(h->left!=NULL)
        {
            cout<<h->left->data;
             q.push(h->left);
        }
        else
            cout<<-1;
       if(h->right!=NULL)
        {
            cout<<" R:"<<h->right->data<<endl;
             q.push(h->right);
        }
        else
            cout<<-1<<endl;

        
    }
}

int CountNodes(BTNode<int>* root)
{
    if(root==NULL)
        return 0;
    return (CountNodes(root->left)+CountNodes(root->right)+1);
}

//1 2 3 4 5 6 7 -1 - 1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{
    BTNode<int>* root= takeInputLevelWise();
    printTree(root);
    cout<<"Number of nodes: "<<CountNodes(root);
    return 0;
}