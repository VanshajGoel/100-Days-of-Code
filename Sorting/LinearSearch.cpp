#include<iostream>
using namespace std;

void LinearSearch(int arr[], int n, int s)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            cout<<s<<" found at position "<<i+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<s<<" not found in array"<<endl;
} 

int main()
{
     int n,search;
     cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
     cout <<"Enter elements of array:";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];         
     }
    cout <<"Enter element to search:";
    cin>>search;
    LinearSearch(arr,n,search);
    return 0;
 
}