
 #include <iostream>
 using namespace std;
 
 
void SelectionSort(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int idx=i;
        for(int j=i+1; j<n;j++)
        {
            if(arr[j]<arr[idx]){
                idx = j;
            }
                
        }
        if(arr[i]>arr[idx])
        {
            swap(arr[i],arr[idx]);
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
    SelectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 
 }
