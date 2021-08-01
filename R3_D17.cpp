//Question -->Sieve of Eratosthenes
//(A prime number finding approach)
//https://youtu.be/nDPo9hsDNvU
#include <iostream>
using namespace std;

int main()
{ 
 int n;
 cout<<"Enter the number till which prime numbers are to be printed: ";
 cin>>n;
 int arr[n+1];
 int temp=0;
 for(int i=0;i<n+1;i++)
 {
   arr[i]=i;
 }

 for(int i=2;i<n+1;i++)
 {
   temp=arr[i];
   if((temp*temp)<=n && temp!=0)
   {
     for(int j=(temp*temp);j<(n+1);j+=i)
     {
       if((arr[j]%temp)==0)
       {
         arr[j]=0;
       }
     }
   }
 }
 for(int i=2;i<n+1;i++)
 {
   if(arr[i]!=0)
   {
     cout<<arr[i]<<" ";
   }
 }
 cout<<endl;
 return 0;
}