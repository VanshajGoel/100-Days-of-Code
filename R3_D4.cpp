//Question -->First repeating element
//https://youtu.be/kJW_iXrwePE
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int M= 1000000;
    int nrr[M];
    for(int i=0;i<M;i++)
    {
        nrr[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        if(nrr[temp]==-1)
        {
            nrr[temp]=i;
        }
        else
        {
            if(minidx>nrr[temp])
                minidx=nrr[temp];
            nrr[temp]=i;    
        }
    }
    if(minidx==INT_MAX)
        cout<<"No repeating element present in array"<<endl;
    else    
        cout<<"First repeation element is at position: "<<minidx<<endl;
    
    return 0;
}