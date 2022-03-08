#include<iostream>
using namespace std;

int* reverseArr(int *arr, int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    return arr;
}

int main()
{
    int n; 
    cout<<"Enter number of elements of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr[i]=t;
    }
    int* rrr;
    rrr = reverseArr(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<rrr[i]<<" ";
    }
    return 0;
}
