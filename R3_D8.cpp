//Question -->Pain sum problem
//https://youtu.be/0JYgnhnZFcE
#include <iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Enter the required sum: ";
    cin>>sum;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int high=n,low=0;
    while(high!=low)
    {
        if(arr[low]+arr[high]==sum)
        {
            cout<<arr[low]<<" "<<arr[high]<<endl;
            return 0;
        }
        else if(arr[low]+arr[high]<sum)
        {
            low++;
        }
        else 
        {
            high--;
        }
    }
    if(high==low)
    {
        if(arr[high]+arr[low]==sum)
        {
             cout<<arr[low]<<" "<<arr[high]<<endl;
        }
        else
        {
            cout<<"Sorry, such elements not found!!"<<endl;
        }
    }
    return 0;
}