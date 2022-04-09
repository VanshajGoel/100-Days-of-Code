#include<iostream>
#include<math.h>
using namespace std;

int FindFirstIndex(int arr[], int n, int ele,int i)
{
    if(n==i)
    {
        return -1;
    }
    if(arr[i]==ele)
    {
        return i;
    }
    return FindFirstIndex(arr,n,ele,i+1);
}

int main()
{
    int arr[] = {0,1,2,3,2,2};
    int n=6;
    int e=2;
    cout<<FindFirstIndex(arr,n,e,0);
    return 0;
}
