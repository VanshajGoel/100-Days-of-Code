//Binary Search(Input elements in sorted order)
#include<iostream>
using namespace std;
int BinarySearch(int s, int e,int arr[],int n)
{
  if(e>=s)
  {
    int mid=(s+e)/2;
    if(arr[mid]==n)
    {
      return mid;
    }
    else if(arr[mid]<n)
    {
      return BinarySearch(mid+1, e, arr, n);
    }
    else 
    {
      return BinarySearch(0,mid-1,arr,n);
    }
  }
  return -1;
}
int main()
{
    int n,e;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements-"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"Enter Element to search: ";
    cin>>e;
    int ans=BinarySearch(0, n,arr,e);
    if(ans==-1)
      cout<<"Element not present in array"<<endl;
    else  
      cout<<"Found at position "<<ans+1<<endl;  
    return 0;  
}
