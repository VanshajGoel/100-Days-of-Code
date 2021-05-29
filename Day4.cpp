/*
Question-->
        * * * * *
      * * * * *
    * * * * *
  * * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;    
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n+(n-1);j++)
     {
         if(j<((n-1)-i) || j>=((n-1)+(n-i)))
         {
             cout<<"  ";
         }
         else
         {
             cout<<"* ";
         }
     }
     cout<<endl;
 }  
 return 0;
}
/*
Question-->
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
int n,t=1;
cin>>n;    
 for(int i=1;i<=n;i++)
 {
     for(int j=0;j<(n-i);j++)
     {
         cout<<" ";
     }
    
     for(int j=(n-i);j<=(n-1);j++)
     {
         cout<<t<<" ";
         t++;
     }
     t=1;
    cout<<endl;
 }
 
}   
/*
Question-->
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;    
for(int i=1;i<=n;i++)
{
    for(int j=0;j<(n-i);j++)
    {
        cout<<"  ";
    }
    int t=i;
    for(int j=(n-i);j<(n-1);j++)
    {
        cout<<t<<" ";
        t--;
    }
    for(int j=(n-1);j<(n+i-1);j++)
    {
        cout<<t<<" ";
        t++;
    }
    cout<<endl;
}
return 0;
}
/*
Question-->
      * 
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;    
for(int i=0;i<n;i++)
{
    for(int j=0;j<(n-i-1);j++)
    {
        cout<<"  ";
    }
    for(int j=(n-i);j<=(n+i);j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=n;i>0;i--)
{
    for(int j=(n-i);j>0;j--)
    {
        cout<<"  ";
    }
    for(int j=0;j<(2*i)-1;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}    