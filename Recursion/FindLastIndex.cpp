#include<iostream>
#include<math.h>
using namespace std;

int FindLastIndex(int arr[], int n, int ele)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[n-1]==ele)
    {
        return n-1;
    }
    return FindLastIndex(arr,n-1,ele);
}

int main()
{
    int arr[] = {1,2,2,3,2,5};
    int n=6;
    int e=1;
    cout<<FindLastIndex(arr,n,e);
    return 0;
}
