//Question -->2D Matrix search(Elements of matrix are in sorted
//order from left to right and from top to bottom)
//https://youtu.be/xKZFAkSt2UU
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter dimentions of matrix: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
          cin>>arr[i][j];
      }
    }
    cout<<"Enter the element to search: ";
    int e;
    cin>>e;
    int l=0,r=m-1;
    while(l<=n and r>=0)
    {
        if(arr[l][r]==e)
        {
            cout<<"Element found"<<endl;
            return 0;
        }
        else if(arr[l][r]>e)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}