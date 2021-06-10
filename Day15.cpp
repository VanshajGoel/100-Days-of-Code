//Question -->Implement stack data-structure 
#include <iostream> 
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Stack
{
    public:
    int n;
    int top=-1;
    Stack(int a)
    {
        n=a;
    }
    vector<int> arr;
    void push(int e)
    {
        if(top<n-1){
            arr.push_back(e);
            top++;
            cout<<"Pushed successful\n";
        }
        else{
            cout<<"Sorry, Stack full, pop some elements\n;";
        }
    }
    void pop()
    {
        if(top!=-1)
        {
            arr.pop_back();
            top--;
            cout<<"Popped successful\n";
        }
        else{
            cout<<"Sorry, Stack is empty, push some elements\n;";
        }
    }
    void display()
    {
       for(auto i=arr.begin();i!=arr.end();++i)
       {
           cout<<*i<<" ";
       }
       cout<<endl;
    } 
    void isFull()
    {
        if(top==n-1)
            cout<<"Yes, the stack is full\n";
        else
            cout<<"No, the stack is not full\n";    
    }
    void peek()
    {
        int y=arr.size();
        cout<<"Peek element is: "<<arr.at(y-1)<<endl;
    }
    void change(int i, int e)
    {
        int & num=arr.at(i-1);
        num=e;
    }
};

int main()
{
    int s;
    cout<<"Enter the size of stack: ";
    cin>>s;
    Stack s1(s);
    while (true)
    {
    cout<<"Which operation you want to do?\n";
    cout<<"1.Push Element\n2.Pop element\n3.Display\n4.Is Full\n5.Peek Element\n6.Change Element\n7 or any key.Exit\n";
    int c;
    cin>>c;
    switch (c)
    {
        case 1:
            int e;
            cout<<"Enter the element to push: ";
            cin>>e;
            s1.push(e);
            break;
        case 2:
            s1.pop();
            cout<<"Pop successful";
            break;
        case 3:   
            s1.display();
            break;
        case 4:
            s1.isFull();
            break; 
        case 5:
            s1.peek();
            break;            
        case 6:
            int i,f;
            cout<<"Enter the index to be changed: ";
            cin>>i;
            cout<<"Enter the new element: ";
            cin>>f;
            s1.change(i,f);
            break;
        default:
            exit(0);
        }
    }    
    return 0;
}