//Question -->Implement queue data-structure 
#include <iostream> 
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Queue
{
 public:
 int top=-1;
 int size;
 vector<int> arr;
 Queue(int n)
 {
     size=n;
 }
 void enqueue(int a)
 {
     if(top==size-1)
     {
         cout<<"Sorry, Queue is full, remove some elements first."<<endl;
     }
     else
     {
         arr.push_back(a);
         cout<<"Element entered in queue successfully"<<endl;
         top++;
     }
 }
 void dequeue()
 {
     if(top==-1)
     {
         cout<<"Sorry, Queue is empty"<<endl;
     }
     else
     {
         arr.erase(arr.begin());
         cout<<"Element removed successfully"<<endl;
         top--;
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

};
int main()
{
 int n;   
 cout<<"Enter size of queue: ";
 cin>>n;
 Queue q1(n);
 while (true)
    {
    cout<<"Which operation you want to do?\n";
    cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4 or any key.Exit\n";
    int c;
    cin>>c;
    switch (c)
    {
        case 1:
            int a;
            cout<<"Enter the element to enqueue: ";
            cin>>a;
            q1.enqueue(a);
            break;
        case 2:
            q1.dequeue();
            break;
        case 3:
            q1.display();
            break;    
        default:
            exit(0);        
    }
    }    
}