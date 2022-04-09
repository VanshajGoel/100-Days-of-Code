#include<iostream>
#include<math.h>
using namespace std;

int SumOfArray(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    return arr[0]+SumOfArray(arr+1,n-1);
}

int main()
{
    int arr[] = {1};
    int n=1;
    cout<<SumOfArray(arr,n);
    return 0;
}
