#include<iostream>
#include<math.h>
using namespace std;

bool FindElement(int arr[], int n, int ele)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==ele)
    {
        return true;
    }
    return FindElement(arr+1,n-1,ele);
}

int main()
{
    int arr[] = {0,1,2,3,4,5};
    int n=6;
    int e=7;
    if(FindElement(arr,n,e))
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}
