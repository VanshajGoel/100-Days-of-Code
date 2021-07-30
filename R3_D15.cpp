//Question -->Count number of 1's
// in binary representation of a number
//https://youtu.be/s8l8NWII3qw
#include <iostream>

using namespace std;
int Count1(int n)
{
   int count =0;
   while(n!=0)
   {
       n=n&(n-1);
       count++;
   }
   return count;
}
int main()
{ 
   int n;
   cin>>n;
   cout<<Count1(n);
   return 0;
}

//Question -->Generate all possible
// subsets of a given set
//https://youtu.be/s8l8NWII3qw
#include <iostream>
using namespace std;
void FindSubset(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{ 
 int arr[4]={1,2,3};
 FindSubset(arr,3);
}