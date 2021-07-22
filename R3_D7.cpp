//Question -->Maximum circular subarray sum
//https://youtu.be/0JYgnhnZFcE
#include <iostream>
#include<climits>
using namespace std;
int Kaddnes(int arr[],int n)
{
    int maxsum=INT_MIN,temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=arr[i];
        if(temp<0)
        {
            temp=0;
        }
        maxsum=max(temp,maxsum);
        
    }
    return maxsum;
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int nonwrapsum,wrapsum;
    nonwrapsum-Kaddnes(arr,n);
    for(int i=0;i<n;i++)
    {
        arr[i]=-arr[i];
    }
 
    wrapsum=sum+Kaddnes(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}