//Question -->Maximum subarray sum by Kadnet's algorithm
//https://youtu.be/0JYgnhnZFcE
#include <iostream>
#include<climits>
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
    int maxsum=0,temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=arr[i];
        if(temp<0)
        {
            temp=0;
        }
        maxsum=max(temp,maxsum);
    }
    cout<<maxsum<<endl;
    return 0;
}