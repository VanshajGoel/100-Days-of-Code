#include<iostream>
using namespace std;

void Sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<0)
                    swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
     int n;
     cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
     cout <<"Enter elements of array:";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];         
     }
    Sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 
}
