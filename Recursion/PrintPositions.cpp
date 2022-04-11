#include<iostream>
#include<math.h>
using namespace std;

void PrintPositions(int arr[], int n, int ele)
{
    if(n==-1)
    {
        return;
    }
    if(arr[n-1]==ele)
    {
        cout<<n-1<<" ";
    }
    return PrintPositions(arr,n-1,ele);
}

int main()
{
    int arr[] = {1,2,2,3,2,5};
    int n=6;
    int e=2;
    PrintPositions(arr,n,e);
    return 0;
}
