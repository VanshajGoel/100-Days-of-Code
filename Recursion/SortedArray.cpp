#include<iostream>
#include<math.h>
using namespace std;

bool CheckSorted(int arr[], int n)
{
    if(n==0 | n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    return CheckSorted(arr+1, n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n=6;
    if(CheckSorted(arr,n))
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is unsorted"<<endl;
    }
    return 0;
}
