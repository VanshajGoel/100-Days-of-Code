//Question -->Max till i Challenge
//https://youtu.be/eJcBH0xvG98
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n],max[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp=INT_MIN;
    for(int i=0;i<n;i++)
    {
         if(arr[i]>temp)
         {
             temp=arr[i];
         }
         max[i]=temp;
    }
    cout<<"MAx till i sequence is: ";
    for(int i=0;i<n;i++)
    {
        cout<<max[i]<<" "; 
    }
    cout<<endl;
    return 0;
}