#include<iostream>
#include<climits>
using namespace std;

void MinAndMax(int *arr, int n)
{
    int maxe = INT_MIN;
    int mine = INT_MAX;
    for(int i=0; i<n;i++)
    {
        if(arr[i]>maxe)
            maxe=arr[i];
        if(arr[i]<mine)
            mine=arr[i];    
    }
    cout<<"Max Element: "<<maxe<<endl;
    cout<<"Min Element: "<<mine<<endl;
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
    MinAndMax(arr,n);
    return 0;
}