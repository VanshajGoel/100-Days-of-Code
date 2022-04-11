#include<iostream>
#include<math.h>
using namespace std;

int CountOccurences(int arr[], int n, int ele)
{
    if(n==-1)
    {
        return 0;
    }
    if(arr[n-1]==ele)
    {
        return 1+CountOccurences(arr,n-1,ele);
    }
    else
    {
        return CountOccurences(arr,n-1,ele);
    }
}
    

int main()
{
    int arr[] = {1,2,2,3,2,5};
    int n=6;
    int e=2;
    cout<<CountOccurences(arr,n,e);
    return 0;
}
