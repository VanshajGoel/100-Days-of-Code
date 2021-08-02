//Question 1-->Sieve of Eratosthenes
//(Find prime factors of a number)
//https://youtu.be/nDPo9hsDNvU
#include <iostream>
using namespace std;

int main()
{ 
 int n;
 cout<<"Enter the number of which prime factors are to be printed: ";
 cin>>n;
 int arr[n+1];
 int temp=0;
 for(int i=0;i<n+1;i++)
 {
   arr[i]=i;
 }

 for(int i=2;i<n+1;i++)
 {
   if(arr[i]==i)
   {  
    temp=arr[i];
    if((temp*temp)<=n)
    {
        for(int j=(temp*temp);j<(n+1);j+=i)
        {
            arr[j]=temp;
        }
    }
   }
 }
while(n!=1)
{
    cout<<arr[n]<<" ";
    n=n/arr[n];
}
 cout<<endl;
 return 0;
}

//Question 2-->Euclid algorithm
//to find GCD of numbers
//https://youtu.be/IW4hJEgZLWI
#include <iostream>
using namespace std;

int main()
{ 
 int a,b;
 cout<<"Enter two numbers to ging their GCD : ";
 cin>>a>>b;
int maxn=max(a,b);
int minn=min(a,b);
int temp=0;
while(minn!=0)
{
    temp=maxn%minn;
    maxn=minn;
    minn=temp;
}
cout<<maxn<<endl;
 return 0;
}

//Question 3-->Find n th term 
//of fibonacci using recursion
//https://youtu.be/oSQbwlepoCU
#include <iostream>
using namespace std;

int fibonacci(int n)
{
        if(n==0 || n==1)
            return n;
        return fibonacci(n-1)+fibonacci(n-2);      
}
int main()
{ 
 int n;
 cout<<"Enter a number n to print n th term of fibonacci sequence: ";
 cin>>n;
 cout<<fibonacci(n);
 return 0;
}