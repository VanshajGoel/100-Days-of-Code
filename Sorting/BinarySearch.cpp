#include<iostream>
using namespace std;

int BinarySearch(int arr[], int search, int start, int end)
{
    if(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==search)
        {
            return mid;
        }
        else if(arr[mid]>search)
        {
            return BinarySearch(arr, search, 0,mid-1);
        }
        else if(arr[mid]<search)
        {
            return BinarySearch(arr, search, mid+1, end);
        }
    }
    return -1;
}
void SelectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {   int idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[idx])
                idx=j;
        }
        if(arr[i]>arr[idx])
        {
            swap(arr[i],arr[idx]);
        }
    }
} 

int main()
{
     int n,search;
     cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
     cout <<"Enter elements of array:";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];         
     }
    cout <<"Enter element to search:";
    cin>>search;
    SelectionSort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int position = BinarySearch(arr,search,0,n-1);
    if(position==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<search<<" found at position "<<position+1<<endl;
    }
    return 0;
 
}